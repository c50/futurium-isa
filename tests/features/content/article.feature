Feature: Manage articles
  In order to write an update of my office's activities
  As an editor of a EU Delegation or Office
  I need to be able to create an article

  @api @futurium @ct
  Scenario: Create an article
    Given I am logged in as a user with the editor role
    And the following article:
      | title         | Reducing pollution in 2016                                                                 |
      | summary       | The new plan for reducing pollution has been presented by the ABC board.                   |
      | body          | The board of directors of ABC has presented the official plan for reducing pollution       |
    Then I should see the heading "Reducing pollution in 2016"
    And I should see the text "The board of directors of ABC has presented the official plan for reducing pollution"
