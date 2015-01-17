Feature: Menu links for the anonymous user
  In order to view all the menulinks
  As an anonymous user
  I should be able to see menu links

  Scenario: I should be able to view site reports
    When I go to the "/"
    Then I should see the link "Site Reports"
    When I click "Site Reports"
    Then I should get a "200" HTTP response

  Scenario: User should be able to login
    When I go to the "/"
    Then I should see the link "Sign in"
    When I click "Sign in"
    Then I should get a "200" HTTP response

  Scenario: User should be able to view locations menu link
    When I go to the "/"
    Then I should see the link "Locations"
    When I click "Locations"
    Then I should get a "200" HTTP response
    Then I should see the following <links>
      | Admin Unit           |
      | Location           |

  Scenario:
  When I am logged in as a user with the "anonymous user" role
   And I go to the "/statistics"
  Then I should not see the following <texts>
      | texts           |
      | Title           |
      | Add new comment |
   Then I should see the following <links>
   
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
      | links                   |
      | Site Reports            |
      | Action Items            |
      | Field Trips             |
      | Images                  |
      | Statistics              |
      | Admin Units             |  
   
 