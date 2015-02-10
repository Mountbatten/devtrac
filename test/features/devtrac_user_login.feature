
Feature: Login Devtrac Distribution
  In order to start using additional features of the site
  As an anonymous user
  I should be able to Login

  Scenario: View the Login page
    When I go to "/user/login"
    Then I should see "Enter your"
    Then I should see "Enter the password that accompanies your username"
      And I should see the following <links>
        | links                    |
        | Request new password     |
        | Log in                   |
      And I should not see the following <links>
        | links                    |
        | Create an account        |
        

  Scenario Outline: Username validation: Invalid username
    When I go to "/user/login"
    Then print current URL 
    Then print last response
      And I fill in "Username" with "<name>"
      And I fill in "Password" with random text
      And I press "Log in"
    Then I should see "Sorry, unrecognized username or password."
      And the field "Username " should be outlined in red
  Examples:
    | name           |
    | randomname     |
    | 123453         |
    | mail@mail.com  |
@javascript    
  Scenario: User should be able to login and see the user profile
    When I go to "/user/login"
    And I fill in "Password *" with "tdddoctor"
    And I fill in "Username *" with "osman"
    And I press "Log in"
    Then I should not see "HELLO, admin"
    Then I should see the following <links>
      | links                   |
      | Site Reports            |
      | Action Items            |
      | Field Trips             |
      | Images                  |
      | Statistics              |
      | Admin Units             |
    Then I should not see the following <texts>
      | texts                   |
      | Welcome, admin          |
    Then I should see the following <texts>
      | Osman                   |
      | Overview                |
