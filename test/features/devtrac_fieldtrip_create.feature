Feature: Devtrac fieldtrip creation
  In order to start using devtrac features of the site
  As an field worker user
  I should be able to create a fieldtrip.

  @javascript    
  Scenario: User should be able to login and see attributions
    When I go to "/user/login"
    And I fill in "Password" with "tdddoctor"
    And I fill in "Username" with "osman"
    And I press "Log in"
    Then I should not see "HELLO, admin"
    Then I should see the following <texts>
      | texts           |
      | Department:     |
      | Function:       |
      | Manager:        |
    Then I should see the following <links>
      | links           |
      | Admin Unit      |
      | Unicef Uganda   |
      | Mountbatten Ltd |
      | www.devtrac.org |
      | Add Field Trip  |
    Then I should not see the following <links>
      | links           |
      | Log in          |
@javascript    
  Scenario: User should be able to login and see menu links
    When I go to "/user/login"
    And I fill in "Password" with "tdddoctor"
    And I fill in "Username" with "osman"
    And I press "Log in"
    Then I should not see "HELLO, admin"
    Then I should see the following <texts>
       | texts          |
       | Osman          |
    Then I should see the following <links>
      | links           |
      | Admin Unit      |
      | Log out         |
      | Site Reports    |
      | Action Items    |
      | Field trips     |
      | Images          |
      | Statistics      | 
      | Locations       |
      | Edit My Profile |
      | Users           |
      | Add Field Trip  |
    Then I should not see the following <links>
      | links           |
      | Log in          |

  @api @javascript
  Scenario: Clickng the add fieldtrip
    When I go to "/user/login"
    And I fill in "Password" with "tdddoctor"
    And I fill in "Username" with "osman"
    And I press "Log in"
    When I go to "/node/add/fieldtrip"
    Then I should see the following <texts>
      | texts           |
      | Create Field Trip    |
      | Purpose(s) of the Fieldtrip    |

  @api
  Scenario: Creating a fieldtrip
    When I go to "/user/login"
    And I fill in "Password" with "tdddoctor"
    And I fill in "Username" with "osman"
    And I press "Log in"
    When I go to "/node/add/fieldtrip"
    Then I should see the following <texts>
      | texts           |
      | Create Field Trip    |
      | Purpose(s) of the Fieldtrip    |  
    When I fill in the following:
      | Title             | pantheon fieldtrip                           |
      | Internal ID  | pan124                  |
      | Percentage               | 100                      |
    And I select "Fieldwork" from "field_fieldtrip_fc_purpose[und][0][field_fieldtrip_fc_purpose_purps][und]"
    And I press "Save"
    Then I should see the following <texts>
      | texts         |
      | Purpose(s) of the Fieldtrip   |
      | In Progress   |
      | pantheon fieldtrip            |
      
    Then I should not see the following <texts>
      | texts         |
      | first get pantheon fieldtrip  |
    Then I should not see the following <texts>
      | texts                         |
      | Field Trip first get pantheon fieldtrip has been created.   |
    Then I should see the following <links>
      | links                         |
      | Comments                      |
      | Add a Site Report to the Field Trip.               |
    Then I should not see the following <links>
      | links                         |
      | Add Site Report               |
      
      
      
