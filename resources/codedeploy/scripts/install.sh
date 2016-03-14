#!/bin/bash

# Install curl. This is needed for the `chr` module.
# Todo: add this to the machine image instead.
apt-get install php5-curl -qq

cd /var/www/html

while [ ! -f /usr/local/etc/subsite/subsite.ini ]
do
  sleep 2
done

# Increase the default max allowed packet size to fix "MySQL has gone away" errors.
sed -i '/^max_allowed_packet/c\max_allowed_packet = 256M' /etc/mysql/my.cnf

bin/phing -propertyfile /usr/local/etc/subsite/subsite.ini install-pack >> /var/log/subsite/install.log 2>&1
chown -R www-data:www-data /var/www/html/*
