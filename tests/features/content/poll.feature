Feature: Manage poll
  In order to create statistics about user data analytics
  As an editor of the futurium project
  I need to be able to create an poll

  @api @futurium @ct
  Scenario: Create an poll
    Given I am logged in as a user with the editor role
    And the following poll:
      | question         | How to reduce pollution in 2016  |
      | choice           | First choice, Second choice      |
