Feature: Devtrac fieldtrip creation
  In order to start using devtrac features of the site
  As an field worker user
  I should be able to create a fieldtrip.

  @javascript    
  Scenario: User should be able to login and see attributions
    When I go to "/user/login"
    And I fill in "Password *" with "tdddoctor"
    And I fill in "Username *" with "osman"
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
      | Log in          |
      | Unicef Uganda   |
      | Mountbatten Ltd |
      | www.devtrac.org |
      | Add Field Trip  |
@javascript    
  Scenario: User should be able to login and see menu links
    When I go to "/user/login"
    And I fill in "Password *" with "tdddoctor"
    And I fill in "Username *" with "osman"
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

Feature: Create a fieldtrip
  In order to create a fieldtrip
  As an administrator user
  I should be able to create a fieldtrip