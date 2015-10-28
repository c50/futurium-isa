Feature: Manage events
  In order to create an event
  As an editor of the futurium project
  I need to be able to create an event

  @api @futurium @ct
  Scenario: Create an event
    Given I am logged in as a user with the administrator role
    And a "tags" term with the name "actions"
    And the following event:
      | title         | Reducing pollution in 2016 Meeting                                                        |
      | summary       | The new plan for reducing pollution will be presented by the ABC board.                   |
      | body          | The board of directors of ABC will present the official plan for reducing pollution       |
      | tags          | actions                                                                                   |
    Then I should see the heading "Reducing pollution in 2016 Meeting"
    And I should see the text "actions"