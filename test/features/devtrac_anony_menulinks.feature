Feature: Menu links for the anonymous user
  In order to view all the menulinks
  As an anonymous user
  I should be able to see menu links

  Scenario: I should be able to view site reports
    When I go to "/"
    Then I should see the following <links> 
      | Site Reports    |
    When I click "Site Reports"
    Then I should get a "200" HTTP response


  @api @javascript    
  Scenario:
  When I go to "/"
  Then I should see the following <links>
      | links           |
      | Statistics      |
  When I go to "/statistics"
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
   
 