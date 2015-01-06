<?php

use Behat\Behat\Context\ClosuredContextInterface,
  Behat\Behat\Context\TranslatedContextInterface,
  Behat\Behat\Context\BehatContext,
  Behat\Behat\Exception\PendingException;
use Behat\Gherkin\Node\PyStringNode,
  Behat\Gherkin\Node\TableNode;
use Drupal\DrupalExtension\Context\DrupalContext;

use Symfony\Component\Process\Process;
use Behat\Behat\Context\Step\Given;
use Behat\Behat\Context\Step\When;
use Behat\Behat\Context\Step\Then;
use Behat\Behat\Event\ScenarioEvent;
use Behat\Behat\Event\StepEvent;
use Behat\Mink\Exception\ElementNotFoundException;


//
// Require 3rd-party libraries here:
//
//   require_once 'PHPUnit/Autoload.php';
//   require_once 'PHPUnit/Framework/Assert/Functions.php';
//

/**
 * Features context.
 */
class FeatureContext extends DrupalContext
{
    /**
     * Initializes context.
     * Every scenario gets its own context object.
     *
     * @param array $parameters context parameters (set them up through behat.yml)
     */
    public function __construct(array $parameters){
    }
    
    
    
      /**
     * Clicks the Welcome Link.
     *
     * @When /^(?:|I )click the Welcome Link$/
     */
    public function clickTheWelcomeLink()
    {
       $link = "Welcome, [current-user:field_user_firstname]";
       $regionObj = $this->getRegion('userprofile_menu');
       // Find the link within the region
       $linkObj = $regionObj->findLink($link);
       if (empty($linkObj)) {
          throw new \Exception(sprintf('The link "%s" was not found in the region "%s" on the page %s', $link, 'userprofile_menu', $this->getSession()->getCurrentUrl()));
        }
       $linkObj->click();
    }
    
    
    /**
     * Filter by current user.
     *
     * @When /^(?:|I )filter by current user$/
     */
    public function filterByCurrentUser()
    {
       $link = $this->user->name . " ";
       $regionObj = $this->getRegion('first_sidebar');
       // Find the link within the region
       $linkObj = $regionObj->findLink($link);
       if (empty($linkObj)) {
          throw new \Exception(sprintf('The link "%s" was not found in the region "%s" on the page %s', $link, 'first_sidebar', $this->getSession()->getCurrentUrl()));
        }
       $linkObj->click();
   }
   
     /**
     * Fills in hidden latitude and longitude values that are normally filled by clicking on the map.
     *
     * @Given /^I fill hidden longitude and latitude field with "(?P<arg1>([0-9]+\.[0-9]+))" and "(?P<arg2>([0-9]+\.[0-9]+))" for the "(?P<type>[^"]*)"$/
     */
    public function iFillHiddenLongitudeAndLatitudeFieldWithPoint($arg1, $arg2, $type)
    {
        switch ($type) {
            case 'Site Visit':
                # code...                
                $this->getSession()->getPage()->find('css','input[name="field_place_lat_long[und][0][geom]"]')->setValue("POINT(" . $arg1 . " " . $arg2 . ")");
                break;
            case 'Human Interest Story':
                # code...                
                $this->getSession()->getPage()->find('css','input[name="field_place_lat_long[und][0][geom]"]')->setValue("POINT(" . $arg1 . " " . $arg2 . ")");
                break;
            case 'Roadside Observation':
                # code...                
                $this->getSession()->getPage()->find('css','input[name="field_ftritem_lat_long[und][0][geom]"]')->setValue("POINT(" . $arg1 . " " . $arg2 . ")");
                break;
            default:
                # code...
                break;
        }
    }
    /**
     * Clicks a link in a drop down menu
     *
     * @Given /^I click the link "(?P<name>[^"]*)" in the dropdown menu$/
     */
    public function iClickTheLinkInTheDropDown($name)
    {
        $this->getSession()->getPage()->clickLink($name);
    }
    /**
     * Clicks a Quick Tab
     *
     * @Given /^I click the tab "(?P<name>[^"]*)"$/
     */
    public function iClickTheTab($name)
    {
        switch ($name) {
            case 'Site Reports':
                $link = $this->getSession()->getPage()->find('css', 'quicktabs-tab-fieldtrip_content_first-3');
                $this->getSession()->getPage()->clickLink($link);
                break;
            
            default:
                # code...
                break;
        }
    }
    
    /**
     * Fills in question Options field with specified id|name|label|value.
     *
     * @When /^(?:|I )fill in question Options field "(?P<field_number>([0-9]+))" with "(?P<value>[^"]*)"$/
     */
    public function fillQuestionOptionsField($field_number, $value)
    {
        $this->getSession()->getPage()->fillField('questionnaire_question_options[und][' . --$field_number . '][value]', $value);
    }
    
    /**
    * @Given /^I am on the "([^"]*)"$/
    */
   public function iAmOnThe($element) {
   $element = $this->getSession()->getPage();
    if (empty($element)) {
      throw new Exception('Page not found');
    }
    // Go to the user login page.
    $this->getSession()->visit($this->locatePath('/user/login'));

    // If I see this, I'm not logged in at all so log the user in.
    $element->fillField('name', 'admin');
    $element->fillField('pass', 'admin');
    $submit = $element->findButton('Log in');
    if (empty($submit)) {
      throw new Exception('No submit button at ' . $this->getSession()->getCurrentUrl());
    
    
   }
   }
     
    /**
     * @Given /^I am logged in as a user with the (\d+) role$/
     */
    public function iAmLoggedInAsAUserWithTheRole($arg1) {
      throw new PendingException();
      }
    
    /**
     * @When /^i go to "([^"]*)"$/
     */
    public function iGoTo($arg1) {
      throw new PendingException();
    }
    
    /**
     * @Given /^I fill in question Options field (\d+) with "([^"]*)"$/
     */
    public function iFillInQuestionOptionsFieldWith($arg1, $arg2) {
      throw new PendingException();
    }
   
    /**
     * @Given /^I am logged in as a user with (\d+) role$/
     */
    public function iAmLoggedInAsAUserWithRole($arg1) {
      throw new PendingException();
    }
 
    /**
     * @Given /^I follow Admin$/
     */
    public function iFollowAdmin() {
      throw new PendingException();
    }
    /**
     * @Given /^I click the "([^"]*)" Link$/
     */
    public function iClickTheLink($arg1) {
      throw new PendingException();
    }

    /**
     * @Given /^I click Open FieldTrips$/
     */
    public function iClickOpenFieldtrips() {
    $this->getSession()->getPage()->clickLink('Quick edit');
    
      throw new PendingException();
    }

    /**
     * @Given /^I fill in "([^"]*)" with (\d+)$/
    */
    public function iFillInWith($arg1, $arg2) {
      throw new PendingException();
    }
 
    /**
     * @Given /^I go to the "([^"]*)"$/
     */
    public function iGoToThe($arg1) {
      throw new PendingException();
    }

    
    /**
     * @Then /^I should  not See "([^"]*)"$/
     */
    public function iShouldNotSee($table) {
        $page = $this->getSession()->getPage();
         $text = 'Welcome to devtrac distro';
      if ($page->hasContent($text) === TRUE) {
        throw new Exception("The text '" . $text . "' was not found");
      }

    }
}
