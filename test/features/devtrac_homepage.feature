Feature: home page for the anonymous user
  In order to view all features on the home page/index page
  As an anonymous user or any user
  I should be able to see all the page features

Scenario: I should be able to the devtrac slogan
    When I go to "/"
    Then I should see the following <texts> 
      | texts           |
      | We show how world aid resources are distributed among supported communities in underdeveloped regions in the world    |
    When I click "About Us"
    Then I should get a "200" HTTP response
