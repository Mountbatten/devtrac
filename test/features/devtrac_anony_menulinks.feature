Feature: Menu links for the anonymous user
  In order to view all the menulinks
  As an anonymous user
  I should be able to see menu links

  Scenario: I should be able to view site reports
    When I go to "/"
    Then I should see the following <links> 
      | links           |
      | Site Reports    |
    When I click "Site Reports"
    Then I should get a "200" HTTP response


  @api @javascript    
  Scenario: I should be able to access index/home page
  When I go to "/statistics"
  Then I should see the following <links>
      | links           |
      | Statistics      |
  When I go to "Statistics"
  Then I should not see the following <texts>
      | texts           |
      | Shop or Market  |
  Then I should see the following <links>
      | links           |
      | Admin Unit      |
      | Log in          |
      | Unicef Uganda   |
      | Mountbatten Ltd |
      | www.devtrac.org |
   
  @api @javascript
  Scenario: I should be able to view attributions on admin units page
    When I go to "/adminunits"
    Then I should see the following <links>
      | links           |
      | Admin Unit      |
      | Log in          |
      | Unicef Uganda   |
      | Mountbatten Ltd |
      | www.devtrac.org |
    Then I should see the following <texts>
      | texts           |  
      | Originally developed for  |
      | Built by        |
    When I click "Site Reports"
    Then I should not see the following <texts>
      | texts           |
      | Add new comment |
    Then I should not see the following <texts>
      | Title           |
    Then I should see the following <links>
      | links                   |
      | Site Reports            |
      | Locations               |
      | Images                  |
      | Statistics              |
      | Admin Units             |  
    Then I should not see the following <links>
      | links                   |
      | Action Items            |  
      | Field Trips             |

 
  @api @javascript
  Scenario: I should be able to do full text search
    When I go to "/"
    Then I should see the following <links>
      | links           |
      | Admin Unit      |
      | Log in          |
      | Unicef Uganda   |
      | Mountbatten Ltd |
      | www.devtrac.org |

  @javascript
  Scenario: i should be able to do a map search
    When I go to "/sitereports"
    Then I should see the following <links>
      | links           |
      | Admin Unit      |
      | Log in          |
      | Unicef Uganda   |
      | Mountbatten Ltd |
      | www.devtrac.org |
