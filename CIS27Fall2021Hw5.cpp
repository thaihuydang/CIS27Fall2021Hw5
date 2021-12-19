/*
* Program Name: cis27Fall2021Hw5
* Discussion: Hw3
* Written by: Huy Dang
* Date: 2021/12/19
*/
#include <iostream>
#include "CIS27HuyDHw5Utility.h"

int main()
{
    RunMenuHw5HuyD();
}

/* Program Output
CIS 27 - Data Structures
Laney College
Huy Dang

Information --
  Assignment:                     HW #5
  Implement by:                   Huy Dang
  Submitted Date:                 2021/12/15
  Current Number of LEB avaible : 2
  Allowed Number of LEB Used:     0
  Remaining Number of LEB:        2

****************************************
*           MENU - HW #5                *
* (1) Creating / Updating 2 Polynomials *
* (2) Evaluating 2 Polynomials          *
* (3) Checking for Palindrome           *
* (4) Adding 2 Polylynomials            *
* (5) Multiplying 2 Polynomials         *
* (6) Displaying 2 Polynomials          *
* (7) Display Resulting Polynomial      *
* (8) Quit                              *
****************************************
Enter an integer for option + ENTER:9

WRONG OPTION!

****************************************
*           MENU - HW #5                *
* (1) Creating / Updating 2 Polynomials *
* (2) Evaluating 2 Polynomials          *
* (3) Checking for Palindrome           *
* (4) Adding 2 Polylynomials            *
* (5) Multiplying 2 Polynomials         *
* (6) Displaying 2 Polynomials          *
* (7) Display Resulting Polynomial      *
* (8) Quit                              *
****************************************
Enter an integer for option + ENTER:6
 Not appropriate as there are no Polynomials!
****************************************
*           MENU - HW #5                *
* (1) Creating / Updating 2 Polynomials *
* (2) Evaluating 2 Polynomials          *
* (3) Checking for Palindrome           *
* (4) Adding 2 Polylynomials            *
* (5) Multiplying 2 Polynomials         *
* (6) Displaying 2 Polynomials          *
* (7) Display Resulting Polynomial      *
* (8) Quit                              *
****************************************
Enter an integer for option + ENTER:1
 Initializing 2 Polynomials -
  Calling init() -

  ********************************
  *       init() Submenu         *
  * (1) Creating 2 Polynomials   *
  * (2) Updating Polynomial 1    *
  * (3) Updating Polynomial 2    *
  * (4) Displaying 2 Polynomials *
  * (5) Return                   *
  ********************************
  Enter an integer for option + ENTER:4
  Wrong option!

  ********************************
  *       init() Submenu         *
  * (1) Creating 2 Polynomials   *
  * (2) Updating Polynomial 1    *
  * (3) Updating Polynomial 2    *
  * (4) Displaying 2 Polynomials *
  * (5) Return                   *
  ********************************
  Enter an integer for option + ENTER:2

  Not appropriate as there are no Fraction objects!

  ********************************
  *       init() Submenu         *
  * (1) Creating 2 Polynomials   *
  * (2) Updating Polynomial 1    *
  * (3) Updating Polynomial 2    *
  * (4) Displaying 2 Polynomials *
  * (5) Return                   *
  ********************************
  Enter an integer for option + ENTER:1
   Creating 2 Polynomials --
    Calling create() --
     Creating Poly #1

     Is there a term(1: yes, 0: no)?: 1
      Enter Expo:3
       Creating coeff Fraction:
        Enter Num:1
        Enter denom:4

     Is there a term(1: yes, 0: no)?: 1
      Enter Expo:0
       Creating coeff Fraction:
        Enter Num:1
        Enter denom:-2

     Is there a term(1: yes, 0: no)?: 0

     Creating Poly #2

     Is there a term(1: yes, 0: no)?: 1
      Enter Expo:4
      Creating coeff Fraction:
       Enter Num:1
       Enter denom:2

     Is there a term(1: yes, 0: no)?: 1
      Enter Expo:2
      Creating coeff Fraction:
       Enter Num:1
       Enter denom:-3

     Is there a term(1: yes, 0: no)?: 1
      Enter Expo:0
      Creating coeff Fraction:
       Enter Num:1
       Enter denom:2

     Is there a term(1: yes, 0: no)?: 0

  ********************************
  *       init() Submenu         *
  * (1) Creating 2 Polynomials   *
  * (2) Updating Polynomial 1    *
  * (3) Updating Polynomial 2    *
  * (4) Displaying 2 Polynomials *
  * (5) Return                   *
  ********************************
  Enter an integer for option + ENTER:4
Displaying 2 Polynomials -
 Poly #1
  Address: 01456C50
  Degree: 3
  Number of Term: 2
   Term # 1
    Address 0145D9F0
    Expo 3
     Coefficient
      num: 1
      denom: 4
   Term # 2
    Address 0145DAD0
    Expo 0
     Coefficient
      num: -1
      denom: 2
 Poly #2
  Address: 01462150
  Degree: 4
  Number of Term: 3
   Term # 1
    Address 014622D8
    Expo 4
     Coefficient
      num: 1
      denom: 2
   Term # 2
    Address 01462070
    Expo 2
     Coefficient
      num: -1
      denom: 3
   Term # 3
    Address 01462118
    Expo 0
     Coefficient
      num: 1
      denom: 2

  ********************************
  *       init() Submenu         *
  * (1) Creating 2 Polynomials   *
  * (2) Updating Polynomial 1    *
  * (3) Updating Polynomial 2    *
  * (4) Displaying 2 Polynomials *
  * (5) Return                   *
  ********************************
  Enter an integer for option + ENTER:5
  Returning to previous menu!
****************************************
*           MENU - HW #5                *
* (1) Creating / Updating 2 Polynomials *
* (2) Evaluating 2 Polynomials          *
* (3) Checking for Palindrome           *
* (4) Adding 2 Polylynomials            *
* (5) Multiplying 2 Polynomials         *
* (6) Displaying 2 Polynomials          *
* (7) Display Resulting Polynomial      *
* (8) Quit                              *
****************************************
Enter an integer for option + ENTER:2
 Evaluating Polynomials -
 Enter the value (Fraction) to be evaluated with -
  num: 1
  denom: 1
  Poly #1 at x (1/1) = (-1/4)
  Poly #2 at x (1/1) = (2/3)

****************************************
*           MENU - HW #5                *
* (1) Creating / Updating 2 Polynomials *
* (2) Evaluating 2 Polynomials          *
* (3) Checking for Palindrome           *
* (4) Adding 2 Polylynomials            *
* (5) Multiplying 2 Polynomials         *
* (6) Displaying 2 Polynomials          *
* (7) Display Resulting Polynomial      *
* (8) Quit                              *
****************************************
Enter an integer for option + ENTER:3
 Checking for Palindrome -

    Poly #1 is palindrome

    Poly #2 is palindrome

****************************************
*           MENU - HW #5                *
* (1) Creating / Updating 2 Polynomials *
* (2) Evaluating 2 Polynomials          *
* (3) Checking for Palindrome           *
* (4) Adding 2 Polylynomials            *
* (5) Multiplying 2 Polynomials         *
* (6) Displaying 2 Polynomials          *
* (7) Display Resulting Polynomial      *
* (8) Quit                              *
****************************************
Enter an integer for option + ENTER:1
 Initializing 2 Polynomials -
  Calling init() -

  ********************************
  *       init() Submenu         *
  * (1) Creating 2 Polynomials   *
  * (2) Updating Polynomial 1    *
  * (3) Updating Polynomial 2    *
  * (4) Displaying 2 Polynomials *
  * (5) Return                   *
  ********************************
  Enter an integer for option + ENTER:2
   Updating Polynomial #1 --

*************************************
*         update() Submenu          *
* (1) Adding one term               *
* (2) Removing one term             *
* (3) Displaying updated Polynomial *
* (4) Return                        *
*************************************
  Enter an integer for option + ENTER:1
      Adding 1 term-
       Enter expo:2
       Creating coeff Fraction:
        Enter Num:1
        Enter denom:1

*************************************
*         update() Submenu          *
* (1) Adding one term               *
* (2) Removing one term             *
* (3) Displaying updated Polynomial *
* (4) Return                        *
*************************************
  Enter an integer for option + ENTER:3
  Address: 01456C50
  Degree: 3
  Number of Term: 3
   Term # 1
    Address 0145D9F0
    Expo 3
     Coefficient
      num: 1
      denom: 4
   Term # 2
    Address 0145DAD0
    Expo 2
     Coefficient
      num: 1
      denom: 1
   Term # 3
    Address 01462A08
    Expo 0
     Coefficient
      num: -1
      denom: 2

*************************************
*         update() Submenu          *
* (1) Adding one term               *
* (2) Removing one term             *
* (3) Displaying updated Polynomial *
* (4) Return                        *
*************************************
  Enter an integer for option + ENTER:4
  Return to previous menu!

  ********************************
  *       init() Submenu         *
  * (1) Creating 2 Polynomials   *
  * (2) Updating Polynomial 1    *
  * (3) Updating Polynomial 2    *
  * (4) Displaying 2 Polynomials *
  * (5) Return                   *
  ********************************
  Enter an integer for option + ENTER:5
  Returning to previous menu!
****************************************
*           MENU - HW #5                *
* (1) Creating / Updating 2 Polynomials *
* (2) Evaluating 2 Polynomials          *
* (3) Checking for Palindrome           *
* (4) Adding 2 Polylynomials            *
* (5) Multiplying 2 Polynomials         *
* (6) Displaying 2 Polynomials          *
* (7) Display Resulting Polynomial      *
* (8) Quit                              *
****************************************
Enter an integer for option + ENTER:4
 Adding 2 Polynomials -
****************************************
*           MENU - HW #5                *
* (1) Creating / Updating 2 Polynomials *
* (2) Evaluating 2 Polynomials          *
* (3) Checking for Palindrome           *
* (4) Adding 2 Polylynomials            *
* (5) Multiplying 2 Polynomials         *
* (6) Displaying 2 Polynomials          *
* (7) Display Resulting Polynomial      *
* (8) Quit                              *
****************************************
Enter an integer for option + ENTER:7
  Address: 01462810
  Degree: 4
  Number of Term: 3
   Term # 1
    Address 01462CE0
    Expo 4
     Coefficient
      num: 1
      denom: 2
   Term # 2
    Address 01462C70
    Expo 3
     Coefficient
      num: 1
      denom: 4
   Term # 3
    Address 01462E30
    Expo 2
     Coefficient
      num: 2
      denom: 3

****************************************
*           MENU - HW #5                *
* (1) Creating / Updating 2 Polynomials *
* (2) Evaluating 2 Polynomials          *
* (3) Checking for Palindrome           *
* (4) Adding 2 Polylynomials            *
* (5) Multiplying 2 Polynomials         *
* (6) Displaying 2 Polynomials          *
* (7) Display Resulting Polynomial      *
* (8) Quit                              *
****************************************
Enter an integer for option + ENTER:5
 Multiply 2 Polynomials -
****************************************
*           MENU - HW #5                *
* (1) Creating / Updating 2 Polynomials *
* (2) Evaluating 2 Polynomials          *
* (3) Checking for Palindrome           *
* (4) Adding 2 Polylynomials            *
* (5) Multiplying 2 Polynomials         *
* (6) Displaying 2 Polynomials          *
* (7) Display Resulting Polynomial      *
* (8) Quit                              *
****************************************
Enter an integer for option + ENTER:7
  Address: 01463168
  Degree: 7
  Number of Term: 7
   Term # 1
    Address 01463590
    Expo 7
     Coefficient
      num: 1
      denom: 8
   Term # 2
    Address 01463280
    Expo 6
     Coefficient
      num: 1
      denom: 2
   Term # 3
    Address 01463360
    Expo 5
     Coefficient
      num: -1
      denom: 12
   Term # 4
    Address 014632F0
    Expo 4
     Coefficient
      num: -7
      denom: 12
   Term # 5
    Address 01463130
    Expo 3
     Coefficient
      num: 1
      denom: 8
   Term # 6
    Address 01463718
    Expo 2
     Coefficient
      num: 2
      denom: 3
   Term # 7
    Address 01463858
    Expo 0
     Coefficient
      num: -1
      denom: 4

****************************************
*           MENU - HW #5                *
* (1) Creating / Updating 2 Polynomials *
* (2) Evaluating 2 Polynomials          *
* (3) Checking for Palindrome           *
* (4) Adding 2 Polylynomials            *
* (5) Multiplying 2 Polynomials         *
* (6) Displaying 2 Polynomials          *
* (7) Display Resulting Polynomial      *
* (8) Quit                              *
****************************************
Enter an integer for option + ENTER:6
  Displaying the resulting Polynomial -
    Address: 01463168
    Degree: 7
    Number of Terms: 7

****************************************
*           MENU - HW #5                *
* (1) Creating / Updating 2 Polynomials *
* (2) Evaluating 2 Polynomials          *
* (3) Checking for Palindrome           *
* (4) Adding 2 Polylynomials            *
* (5) Multiplying 2 Polynomials         *
* (6) Displaying 2 Polynomials          *
* (7) Display Resulting Polynomial      *
* (8) Quit                              *
****************************************
Enter an integer for option + ENTER:8

WRONG OPTION!
*/

/** Logic_Code_Ouput Issues
No Comments!
*/