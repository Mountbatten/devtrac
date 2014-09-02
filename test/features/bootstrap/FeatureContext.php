<?php

use Behat\Behat\Context\ClosuredContextInterface;
use Behat\Behat\Context\TranslatedContextInterface;
use Behat\Behat\Context\BehatContext;
use Behat\Behat\Exception\PendingException;
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
}
