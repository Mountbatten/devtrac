@javascript
Feature: Login Devtrac Distribution
  In order to start using additional features of the site
  As an anonymous user
  I should be able to Login

  Scenario: View the Login page
    When I go to "/user/login"
    Then I should see "Login"
      And I should see the following <links>
        | links                    |
        | Forgot your password?    |
        | Create an account        |

  Scenario Outline: Username validation: Invalid username
    When I go to "/user/login"
    Then print current URL 
      And I fill in "name" with "<name>"
      And I fill in "pass" with random text
      And I press "Log in"
    Then I should see "Sorry, unrecognized username or password."
      And the field "Username" should be outlined in red
  Examples:
    | name           |
    | randomname     |
    | 123453         |
    | mail@mail.com  |
