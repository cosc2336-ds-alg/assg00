/** @file assg00-tests.cpp
 * @brief Unit tests for Assignment 00, practice class workflow.
 *
 * @author Derek Harter
 * @note   class: COSC 2336, Summer 2021
 * @note   ide  : VS Code Server 3.9.3
 * @note   assg : Assignment 00
 * @date   June 1, 2021
 *
 * Assignment 00, example Workflow for Assignments and getting Git and
 * GitHub and VSCode setup.  This is the file containing the unit
 * tests for this assignment.  It uses the catch2 unit test
 * framework. You should start by definint the calculateMean()
 * function to return a result of 0.  Then incrementally code so that
 * you pass the unit tests for calculateMean.  Repeat this to define
 * calculateStandardDeviation, uncomment the unit tests for the second
 * function, then incrementally add code till you pass the defined
 * tests.
 */
#include <cmath>
#include <iostream>
#include "catch.hpp"
#include "assg00-functions.hpp"
using namespace std;

/** isPrime() test cases
 * Uncomment the following test case block and write your code
 * to pass these tests for the isPrime() function.
 */
/*
   TEST_CASE("<isPrime()> function tests", "[isPrime]")
   {
   // 1, 2 and 3 are all primes
   CHECK(isPrime(1));
   CHECK(isPrime(2));
   CHECK(isPrime(3));

   // 4 is not prime
   CHECK_FALSE(isPrime(4));

   // test rest of values up to 20
   CHECK(isPrime(5) );
   CHECK_FALSE(isPrime(6) );
   CHECK(isPrime(7) );
   CHECK_FALSE(isPrime(8) );
   CHECK_FALSE(isPrime(9) );
   CHECK_FALSE(isPrime(10) );
   CHECK(isPrime(11) );
   CHECK_FALSE(isPrime(12) );
   CHECK(isPrime(13) );
   CHECK_FALSE(isPrime(14) );
   CHECK_FALSE(isPrime(15) );
   CHECK_FALSE(isPrime(16) );
   CHECK(isPrime(17) );
   CHECK_FALSE(isPrime(18) );
   CHECK(isPrime(19) );
   CHECK_FALSE(isPrime(20) );

   // test some big primes and not primes (using google to search
   // for list of primes)
   CHECK(isPrime(100003) );
   CHECK(isPrime(101839) );

   CHECK_FALSE(isPrime(101007) );
   CHECK_FALSE(isPrime(101831) );
   }
*/

/** findPrimes() test cases
 * Uncomment the following test case block and write your code
 * to pass these tests for the findPrimes() function.
 */
/*
   TEST_CASE("<findPrimes()> function tests", "[findPrimes]")
   {
   // we know in range from 1 to 20 there are 9 prime numbers
   // 1, 2, 3, 5, 7, 11, 13, 17, 19
   CHECK(findPrimes(1, 20, false) == 9);

   // looking at a list of primes up to 1000 there are 169 primes in range
   // 1 to 1000
   CHECK(findPrimes(1, 1000, false) == 169);

   // following is an example, I may not empirically validate the list of primes
   // found is correct, but we can detect if the number of primes ever changes
   // in future runs by adding in a test like this
   CHECK(findPrimes(100000, 150000, false) == 4256);
   }
 */
