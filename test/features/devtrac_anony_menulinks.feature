Feature: Menu links for the anonymous user
  In order to handle the bought products
  As an anonymous user
  I should be able to see menu links

  @api @javascript
  Scenario:
    When I am logged in as a user with the "field worker" role
      And I go to "/statistics"
    When I click on Site Reports link
    Then I should see not the following <texts>
      | texts           |
      | Title           |
      | Add new comment |
   Then I should see the following <links>
   
