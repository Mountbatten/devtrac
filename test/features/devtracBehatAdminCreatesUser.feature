@javascript
Feature: Maintain content
  In order to maintain site content
  As an editor
  I need to log in

  Scenario: Enter valid username and password // Happy path
    Given I am on the "/user/login"
    When I fill in "admin" for "name"
    And I fill in "admin" for "pass"
    And I press "Log in"
    Then I should see "Add content"
  
  Scenario: Devtrac Admin creates user details
    And I am logged in as a user with the 7 role
    Given I am on "/admin/people/create"
    And I click the link "Add user" in the dropdown menu
    And I should see "This web page allows administrators to register new users. Users' e-mail addresses and usernames must be unique."
    And I fill in "Username" with "user_demo"
    And I fill in "E-mail address" with "user_demo@mountbatten.net"
    And I fill in "Password" with "user_demo"
    And I fill in "Confirm password" with "user_demo"
    And I select the radio button "Active"
    And I check the box "authenticated user"
    And I check the box "field worker"
    And I fill in "Function" with "3"
    And I fill in "Academic Degree(s)" with "Bsc. Quality Assurance"
    And I fill in "Manager" with "admin (1)"
    And I fill in "Department" with "6"
    And I fill in "First Name" with "User Demo"
    And I fill in "Surname" with "User Demo Demo"
    And I fill in "About Me" with "Iam a hoax user demo test account"
    And I press "Create new account"
    And I am at "admin/people/create"
    And I should see "STATUS"
    
  Scenario: Devtrac Logout Test
    Given I am logged in as a user with the 7 role
    And I follow "Sign out"
    Then I should see "Site Reports"

