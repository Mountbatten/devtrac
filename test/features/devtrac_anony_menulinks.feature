Feature: Menu links for the anonymous user
  In order to view all the menulinks
  As an anonymous user
  I should be able to see menu links

  @api @javascript
  Scenario:
    When I am logged in as a user with the "field worker" role
      And I go to "/statistics"
    When I click "Site Reports"
    Then I should not see the following <texts>
      | texts           |
      | Title           |
      | Add new comment |
   Then I should see the following <links>
   
