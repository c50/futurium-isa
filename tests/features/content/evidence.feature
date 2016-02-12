Feature: Manage evidence
  In order to create a vision roadmap
  As an editor of the futurium project
  I need to be able to create an evidence

  @api @futurium @ct
  Scenario: Create an evidence
    Given I am logged in as a user with the editor role
    And the following evidence:
      | title         | Reducing pollution in 2016 Meeting                                                        |
      | summary       | The new plan for reducing pollution will be presented by the ABC board.                   |
      | body          | The board of directors of ABC will present the official plan for reducing pollution       |
    Then I should see the heading "Reducing pollution in 2016 Meeting"
