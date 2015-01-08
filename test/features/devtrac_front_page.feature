Feature: Frontpage
  To have people being interested in devtrac
  As any user
  I should be able to access homepage

  Background:
    Given I am on the homepage

  Scenario: I should be able to click site reports
    When I am on the homepage
    Then I should see the link "Site Reports"
    When I click "Site Reports"
    Then I should get a "200" HTTP response

  Scenario: User should be able to login
    Then I should see the link "Log in"
    When I click "Log in"
    Then I should get a "200" HTTP response

  Scenario: User should be able to click Action items
    Then I should see the link "Action Items"
    When I click "Action Items"
    Then I should get a "200" HTTP response

  Scenario: User should be able to click statistics
    Then I should see the link "Statistics"
    When I click "Statistics"
    Then I should get a "200" HTTP response  
    
  Scenario: User should be able to click admin units
    Then I should see the link "Admin Units"
    When I click "Admin Units"
    Then I should get a "200" HTTP response

  Scenario: User should not be able to see Images link
    Then I should not see the link "Images"
    Then I should not get a "200" HTTP response
