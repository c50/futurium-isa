```
  ███████╗██╗   ██╗████████╗██╗   ██╗██████╗ ██╗██╗   ██╗███╗   ███╗    ██╗███████╗ █████╗
  ██╔════╝██║   ██║╚══██╔══╝██║   ██║██╔══██╗██║██║   ██║████╗ ████║    ██║██╔════╝██╔══██╗
  █████╗  ██║   ██║   ██║   ██║   ██║██████╔╝██║██║   ██║██╔████╔██║    ██║███████╗███████║
  ██╔══╝  ██║   ██║   ██║   ██║   ██║██╔══██╗██║██║   ██║██║╚██╔╝██║    ██║╚════██║██╔══██║
  ██║     ╚██████╔╝   ██║   ╚██████╔╝██║  ██║██║╚██████╔╝██║ ╚═╝ ██║    ██║███████║██║  ██║
  ╚═╝      ╚═════╝    ╚═╝    ╚═════╝ ╚═╝  ╚═╝╚═╝ ╚═════╝ ╚═╝     ╚═╝    ╚═╝╚══════╝╚═╝  ╚═╝
```

This is a starting point for creating new instances of the futurium ISA project
from the European Commission.


## Features

- Support for Easy drupal installation: Drupal 7.x.
- Easily test your code.
- Integrated support for Behat and PHP CodeSniffer.
- Built-in support for Continuous Integration using ContinuousPHP.
- Build your website in an automated way to get your entire team up and running
  fast!

## Getting started

### 1. Download the project

Our project is called `ec-europa/futurium-isa` and is hosted on our
Github:

```
$ git clone https://github.com/ec-europa/futurium-isa.git
$ cd futurium-isa
```

### 2. Install dependencies

The software packages that are needed to build the project are installed with
[Composer](https://getcomposer.org/). See the documentation for Composer for
more information on how to install and use it.

```
$ composer install
```

### 3. Create a build.properties.local file

This file contains the configuration which is unique to your local environment,
i.e. your development machine. In here you specify your database credentials,
your base URL, the administrator password etc.

Some other things that can be useful is to provide a list of your favourite
development modules to enable, and whether you want to see verbose output of
drush commands and tests. Another good trick is that you can try out your
project against different versions of the Multisite / NextEuropa platform, for
example you might want to check out if your code still runs fine on the latest
development version by setting `platform.package.reference` to `develop`.

> Because these settings are personal they should not be shared with the rest of
> the team. *Make sure you never commit this file!*

Example `build.properties.local` file:

        # Database settings.
        drupal.db.name = ec_futurium
        drupal.db.user = 
        drupal.db.password =
        
        # Admin user.
        drupal.admin.username = admin
        drupal.admin.password = pass
        
        # The base URL to use in Behat tests.
        behat.base_url = http://futurium.local/
        
        # The location of the Composer executable.
        composer.bin = /usr/local/bin/composer


You can also specify development modules that only will be enabled locally
by listing them as below in the <b>drupal.development.modules</b> param.


        # Development / testing modules to enable.
        drupal.development.modules = devel devel_generate context_ui field_ui maillog simpletest views_ui


### 4. Build your local development environment

Now that our configuration is ready, we can build our project.

* As an <b>external party</b> willing to use Futurium and store it on your your own repository, use:
```
$ ./bin/phing build-futurium
```

* As a developer <b>inside European Commission</b> use:
```
$ ./bin/phing build-dev
```

This will:

* Download the latest validated version of Drupal 7.x.
* Build the project into the `platform/` subfolder.
* Download the Futurium features and theme files into the `lib/` folder
* Symlink your custom modules and themes into the platform. This allows you to
  work inside the Drupal site, and still commit your files easily.


### 5. Install the site

* As an <b>external party</b> willing to use Futurium and store it on your your own repository, use:
```
$ ./bin/phing install-futurium
```

* As a developer <b>inside European Commission</b> use:
```
$ ./bin/phing install-dev
```

This will:

* Install the website with `drush site-install`.
* Enable the modules you specified in the `drupal.development.modules` property.

After a few minutes (from 7 to 20 min depending on the machine) this process should complete and the website should be up
and running!


### 6. Set up your webserver

The Drupal site will now be present in the `platform/` folder. Set up a
virtualhost in your favourite web server (Apache, Nginx, Lighttpd, ...) and
point its webroot to this folder.

If you intend to run Behat tests then you should put the base URL you assign to
your website in the `build.properies.local` file for the `behat.base_url`
property. See the example above.


### 7. Set up your own repository

List all remotes:
```
$ git remote -v
```
Delete the origin remote from futurium-isa before adding it as upstream:
```
$ git remote rm origin
$ git remote add upstream https://github.com/ec-europa/futurium-isa.git
$ git remote add origin https://yourownrepo
```
Finally add your own origin repository:
```
$ git remote add origin https://yourownrepo
```
From there you are able to commit code into your own repository:
```
$ git add .
$ git commit
$ git push
```

### 8. Upgrading the project

List all remotes:
```
$ git remote -v
```
Be sure you configured the upstream remote from previous step, so it is displayed when listing all remotes.

Then update from upstream:
```
$ git checkout -b feature/update_from_upstream
$ git pull upstream master
```

Fix conflicts if some, then push the changes, you are done.


## Repository structure

### 1. Project configuration

The configuration of the project is managed in 3 `build.properties` files:

1.  `build.properties.dist`: This contains default configuration which is
    common for all NextEuropa projects. *This file should never be edited.*
2.  `build.properties`: This is the configuration for your project. In here you
    can override the default configuration with settings that are more suitable
    for your project. Some typical settings would be the site name, the install
    profile to use and the modules/features to enable after installation.
3.  `build.properties.local`: This contains configuration which is unique for
    the local development environment. In here you would place things like your
    database credentials and the development modules you would like to install.
    *This file should never be committed.*

### 2. Project code

* Your custom modules, themes and custom PHP code go in the `lib/` folder. The
  contents of this folder get symlinked into the Drupal website at `sites/all/`.
* Any contrib modules, themes, libraries and patches you use should be put in
  the make file `resources/site.make`. Whenever the site is built these will be
  downloaded and copied into the Drupal website.
* If you have any custom Composer dependencies, declare them in
  `resources/composer.json` and `resources/composer.lock`.

### 3. Drupal root

The Drupal site will be placed in the `platform/` folder when it is built. Point
your webserver here. This is also where you would execute your Drush commands.
Your custom modules are symlinked from `platform/sites/all/modules/custom/` to
`lib/modules/` so you can work in either location, whichever you find the most
comfortable.

### 4. Behat tests

All Behat related files are located in the `tests/` folder.

* `tests/behat.yml`: The Behat configuration file. This file is regenerated
  automatically when the project is built and should never be edited or
   committed.
* `tests/behat.yml.dist`: The template that is used for generating `behat.yml`.
  If you need to tweak the configuration of Behat then this is the place to do
  that.
* `tests/features/`: Put your Behat test scenarios here.
* `tests/src/Context/`: The home of custom Context classes.

### 5. Other files and folders

* `bin/`: Contains command line executables for the various tools we use such as
  Behat, Drush, Phing, PHP CodeSniffer etc.
* `build/`: Will contain the build intended for deployment to production. Use
  the `build-dist` Phing target to build it.
* `src/`: Custom PHP code for the build system, such as project specific Phing
  tasks.
* `tmp/`: A temporary folder where the platform tarball is downloaded and
  unpacked during the build process.
* `tmp/deploy-package.tar.gz`: The platform tarball. This file is very large and
  will only be downloaded once. When a new build is started in the future the
  download will be skipped, unless this file is deleted manually.
* `vendor/`: Composer dependencies and autoloader.


## Tests and coding standards

### 1. Run tests

Behat has been preconfigured in the `tests/` folder and an example test and
some example Contexts are supplied. Feel free to change them to your needs.
A symlink to the Behat executable is placed in the `tests/` folder for your
convenience.

```
$ cd tests/
$ ./behat
```

### 2. Check coding standards

PHP CodeSniffer is preconfigured with the latest Drupal coding standards
courtesy of the Coder module. A "git pre-push hook" is installed that will
automatically check the coding standards whenever you push your branch.  When
you are pushing new code to an existing branch only the changed files will be
checked to increase performance. When you push an entirely new branch a
complete check will be performed.

To manually check the coding standards you can run PHP CodeSniffer from the
root folder:

```
$ ./bin/phpcs
```

In many cases PHP CodeSniffer can fix the found violations automatically. To do
this, execute the following command from the root folder:

```
$ ./bin/phpcbf
```

If you need to tweak the coding standards (for example because you have created
a Views plugin which has class names that do not strictly respect the coding
standards) then you can put your additional rules in the `phpcs-ruleset.xml`
file. Please refer to the documentation of PHP CodeSniffer on how to configure
the rules.


## Translating the website in a different language

### 1. Translating Drupal Interface:

    - Administer languages: http://example.com/admin/config/regional/language
    - Manage strings for localization: http://example.com/admin/config/regional/translate
    - Specify how the desired languages are detected: http://example.com/admin/config/regional/language/configure
    or Configuration → Regional and language → Detection and selection
    - Translate strings: http://example.com/admin/config/regional/translate/translate
    - Import strings: http://example.com/admin/config/regional/translate/import
    - Export strings: http://example.com/admin/config/regional/translate/export

source: https://www.drupal.org/documentation/modules/locale


## Remarks
> <b>http_proxy</b> If you are behind a proxy, set the http_proxy variables in
build.properties.dist file for server and in build.properties.local for user
credentials. Those variables will then be set and will be used by
drupal_http_request() needed for the geocoder project for example.

    futurium.http_proxy.server =
    futurium.http_proxy.port =
    futurium.http_proxy.user =
    futurium.http_proxy.pass =

> <b>PHP memory</b> If drush does not reflect your <b>php.ini</b> config and
complains about php allowed memory issues while building the project, consider
adding a environment variable in your shell profile:

    export PHP_OPTIONS='-d memory_limit="1024M"'

> <b>sendmail</b> If you get an error from drupal while building the project,
 because your system is not yet configured to send emails, or you install a
 mailserver like postfix etc ... or you edit your <b>php.ini</b> file and edit the
 sendmail value to true.

    sendmail_path = /bin/true

> <b>Behat testing</b> When behind a proxy, your behat scenarios will fail.
You should call behat from the <b>behat_no_proxy.sh</b> script. It will unset
temporary the environment proxy variables.

    ./behat_no_proxy.sh behat <param>

> <b>Nesting git repositories</b> Using the <b>build-dev</b> task the lib/ folder
is a git repo, inside another git repo. When inside the lib/ folder, be sure to checkout
the right branch:

    cd lib/
    git status
    git checkout -b develop origin/develop
    git branch --set-upstream-to=origin/develop develop


> Those followings <b>extra settings</b> are not needed, but can help you debugging
by putting drush, phpcs or behat in verbose mode. Define those in your build.properties.local file.

    # Verbosity of drush commands. Set to TRUE to be verbose.
    drush.verbose = TRUE

    # Verbosity of PHP Codesniffer. Set to 0 for standard output
    # 1 for progress report
    # 2 for debugging info
    phpcs.verbose = 2

    # Set verbosity for Behat tests. 0 is completely silent
    # 1 is normal output
    # 2 shows exception backtraces
    # 3 shows debugging information
    behat.options.verbosity = 3
