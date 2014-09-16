<?php

//use Behat\Behat\Context\ClosuredContextInterface;
//use Behat\Behat\Context\TranslatedContextInterface;
//use Behat\Behat\Context\BehatContext;
//use Behat\Behat\Exception\PendingException;/
use Behat\Gherkin\Node\PyStringNode;
use Behat\Gherkin\Node\TableNode;
use Drupal\DrupalExtension\Context\DrupalContext;

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
    public function __construct(array $parameters)
    {
        // Initialize your context here
    }
    
    
    
      /**
     * Clicks the Welcome Link.
     *
     * @When /^(?:|I )click the Welcome Link$/
     *
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
    */
    
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
}
