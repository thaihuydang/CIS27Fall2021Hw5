#include "CIS27HuyDHw5Utility.h"

#include <stdio.h>
#include <stdlib.h>

void RunMenuHw5HuyD()
{
	int optionHuyD = 0;
	TPolyPtrHuyD Poly1HuyD=nullptr;
	TPolyPtrHuyD Poly2HuyD=nullptr;
	int n, d;
	TFractionPtrHuyD myFraction;
	printf("CIS 27 - Data Structures\n");
	printf("Laney College\n");
	printf("Huy Dang\n");
	printf("\nInformation --\n");
	printf("  Assignment:                     HW #5\n");
	printf("  Implement by:                   Huy Dang\n");
	printf("  Submitted Date:                 2021/12/15\n");
	printf("  Current Number of LEB avaible : 2\n");
	printf("  Allowed Number of LEB Used:     0\n");
	printf("  Remaining Number of LEB:        2\n");

	do {
		printf("\n");
		printf("****************************************\n");
		printf("*           MENU – HW #5                *\n");
		printf("* (1) Creating / Updating 2 Polynomials *\n");
		printf("* (2) Evaluating 2 Polynomials          *\n");
		printf("* (3) Checking for Palindrome           *\n");
		printf("* (4) Adding 2 Polylynomials            *\n");
		printf("* (5) Multiplying 2 Polynomials         *\n");
		printf("* (6) Displaying 2 Polynomials          *\n");
		printf("* (7) Display Resulting Polynomial      *\n");
		printf("* (8) Quit                              *\n");
		printf("****************************************\n");
		printf("Enter an integer for option + ENTER:");
		scanf_s("%d", &optionHuyD);
		switch (optionHuyD)
		{
		case 1:
			printf(" Initializing 2 Polynomials –");
			printf("Calling init() -");
			runHw5submenuHuyD(Poly1HuyD, Poly2HuyD);
			break;
		case 2:
			if (Poly1HuyD && Poly2HuyD) {
				printf("Evaluating Polynomials -\n");
				printf("Enter the value (Fraction) to be evaluated with -\n");
				printf("num: ");
				scanf("%d", &n);
				printf(" denom: ");
				scanf("%d", &d);
				myFraction = { n,d };

			}
			else
			{
				printf("\n  Not appropriate as there are no Fraction objects! \n");
			}

			break;
		case 3:
			/*if (F1 && F2)
			{
				if (!F3) {
					F3 = (TFraction*)malloc(sizeof(TFraction));
				}

				runHw3ArithmeticmenuHuyD(*F1, *F2, F3);
			}
			else
			{
				printf("\n You have to input for 2 Fraction first!\n");
			}*/


			break;
		case 4:
			/*if (F1 && F2) {
				printf(" Displaying Fraction Objects - \n");
				printf("  First Object -- \n");
				printf("   Address: %p \n", F1);
				printf("   num: %d \n", F1->num);
				printf("   denom: %d\n", F1->denom);
				printf("\n  Second Object -- \n");
				printf("   Address: %p\n", F2);
				printf("   num: %d\n", F2->num);
				printf("   denom: %d\n", F2->denom);
				printf("\n  Resulting Object -- \n");
				if (F3) {
					printf("   Address: %p\n", F3);
					printf("   num: %d\n", F3->num);
					printf("   denom: %d\n", F3->denom);
				}
				else
				{
					printf("   Not Existing!");
				}

			}
			else
			{
				printf("\n Cannot choose this option as there are no"
					"Fraction objects!\n");
			}*/

			break;
		case 5:
			/*free(F1);
			F1 = nullptr;
			free(F2);
			F2 = nullptr;*/
			/*free(F3);
			F3 = nullptr;*/
			printf("\nHave fun!");

			break;
		default:
			printf("\nWRONG OPTION!\n");
			break;
		}
	} while (optionHuyD != 8);

}
void runHw5submenuHuyD(TPolyPtrHuyD F1, TPolyPtrHuyD F2) {
	int optionHuyD = 0;
	int optionterm = -1;
	int optionupdate;
	int exp, n, d;
	int term=1;
	TPolyTermNodePtrHuyD Temp;
	TPolyTermPtrHuyD NewPolyterm=(TPolyTermPtrHuyD)malloc(sizeof(PolyTermHuyD)) ;
	do {
		printf("\n");
		printf("  ********************************\n");
		printf("  *       init() Submenu         *\n");
		printf("  * (1) Creating 2 Polynomials   *\n");
		printf("  * (2) Updating Polynomial 1    *\n");
		printf("  * (3) Updating Polynomial 2    *\n");
		printf("  * (4) Displaying 2 Polynomials *\n");
		printf("  * (5) Return                   *\n");
		printf("  ********************************\n");
		printf("  Enter an integer for option + ENTER:");
		scanf_s("%d", &optionHuyD);
		switch (optionHuyD)
		{
		case 1:

			if ( F1|| F2 ) {
				printf("\n   Polynimials Objects exist -- Choose Update or Quit! \n");
			}
			else {
				/*F1 = (PolyHuyD*)malloc(sizeof(PolyHuyD));
				F2 = (PolyHuyD*)malloc(sizeof(PolyHuyD));*/
				printf("   Creating 2 Polynomials --\n");
				printf("    Calling create() --\n");
				printf("     Creating Poly #1\n");
				
				do
				{
					printf("\n     Is there a term(1: yes, 0: no)?: ");
					scanf_s("%d", &optionterm);
					switch (optionterm)
					{
					case 1:
						printf("      Enter Expo:");
						scanf_s("%d", &exp);
						printf("       Creating coeff Fraction:\n");
						printf("        Enter Num:");
						scanf_s("%d", &n);
						printf("        Enter denom:");
						scanf_s("%d", &d);
						updatePolyTerm(exp, n, d,NewPolyterm);
						insertTermToPoly(NewPolyterm, &F1);

					case 0:
						break;
					default:
						printf("Wrong option!");
					}
					

				} while (optionterm);

				printf("\n     Creating Poly #2\n");

				do
				{
					printf("\n     Is there a term(1: yes, 0: no)?: ");
					scanf_s("%d", &optionterm);
					switch (optionterm)
					{
					case 1:
						printf("      Enter Expo:");
						scanf_s("%d", &exp);
						printf("      Creating coeff Fraction:\n");
						printf("       Enter Num:");
						scanf_s("%d", &n);
						printf("       Enter denom:");
						scanf_s("%d", &d);
						updatePolyTerm(exp, n, d, NewPolyterm);
						insertTermToPoly(NewPolyterm, &F2);

					case 0:
						break;
					default:
						printf("Wrong option!");
					}


				} while (optionterm);
				
			}
			break;
		case 2:
			if (F1) {
				printf("   Updating Polynomial #1 --\n");
				do
				{
					
					printf("\n");
					printf("*************************************\n");
					printf("*         update() Submenu          *\n");
					printf("* (1) Adding one term               *\n");
					printf("* (2) Removing one term             *\n");
					printf("* (3) Displaying updated Polynomial *\n");
					printf("* (4) Return                        *\n");
					printf("*************************************\n");
					printf("  Enter an integer for option + ENTER:");
					scanf_s("%d", &optionupdate);
					switch (optionupdate)
					{
					case 1:
						printf("      Adding 1 term-\n");
						printf("       Enter expo:");
						scanf_s("%d", &exp);
						printf("       Creating coeff Fraction:\n");
						printf("        Enter Num:");
						scanf_s("%d", &n);
						printf("        Enter denom:");
						scanf_s("%d", &d);
						updatePolyTerm(exp, n, d, NewPolyterm);
						insertTermToPoly(NewPolyterm, &F1);
						break;

					case 3:
						DisplayPolynomial(F1);
						break;
					default:
						printf("Wrong option!");
					}


				} while (optionupdate!=4);

			}
			else
			{
				printf("\n  Not appropriate as there are no Fraction objects!\n");
			}
			break;
		/*case 3:
			if (F2)
			{
				printf("\n     Second Fraction:\n");
				printf("      Enter an int for num:");
				scanf_s_s("%d", &F2->num);
				do
				{
					printf("      Enter an int for denom:");
					scanf_s_s("%d", &F2->denom);
					if (F2->denom == 0) {
						printf("       0 is not allowed!\n");
					}

				} while (!CheckNumbernotZero(F2->denom));
				CheckFraction(F2);
			}
			else
			{
				printf("\n  Not appropriate as there are no Fraction objects!\n");
			}
			break;*/
		case 4:
			printf("Displaying 2 Polynomials -\n");
			printf(" Poly #1\n");
			/*printf("  Address: %p\n", F1);
			printf("  Degree: %d\n", (*F1).degreeHuyD);
			printf("  Number of Term: %d\n", (*F1).numTermHuyD);
			Temp = F1->polyListPtrHuyD;
			while (Temp)
			{
				
				printf("   Term # %d\n", term);
				printf("    Address %p\n", Temp->polyTermPtrHuyD);
				printf("    Expo %p\n", Temp->polyTermPtrHuyD->expoHuyD);
				printf("     Coefficient \n");
				printf("      num: %d\n", Temp->polyTermPtrHuyD->coeffPtrHuyD->num);
				printf("      denom: %d\n", Temp->polyTermPtrHuyD->coeffPtrHuyD->denom);
				Temp = Temp->next;
				term++;
			}*/
			DisplayPolynomial(F1);

			term = 1;
			if (F2) 
			{
				printf("\n Poly #2\n");
				printf("  Address: %p\n", F2);
				printf("  Degree: %d\n", (*F2).degreeHuyD);
				printf("  Number of Term: %d\n", (*F2).numTermHuyD);
				Temp = F2->polyListPtrHuyD;
				while (Temp)
				{

					printf("   Term # %d\n", term);
					printf("    Address %p\n", Temp->polyTermPtrHuyD);
					printf("    Expo %p\n", Temp->polyTermPtrHuyD->expoHuyD);
					printf("     Coefficient \n");
					printf("      num: %d\n", Temp->polyTermPtrHuyD->coeffPtrHuyD->num);
					printf("      denom: %d\n", Temp->polyTermPtrHuyD->coeffPtrHuyD->denom);
					Temp = Temp->next;
					term++;
				}
			}
			
			break;
		case 5:
			printf("  Returning to previous menu!");
			break;
		default:
			printf("\nWRONG OPTION!\n");
			break;
		}
	} while (optionHuyD != 5);
}
void DisplayPolynomial(TPolyPtrHuyD F1) {
	TPolyTermNodePtrHuyD Temp;
	int term = 1;
	printf("  Address: %p\n", F1);
	printf("  Degree: %d\n", (*F1).degreeHuyD);
	printf("  Number of Term: %d\n", (*F1).numTermHuyD);
	Temp = F1->polyListPtrHuyD;
	while (Temp)
	{

		printf("   Term # %d\n", term);
		printf("    Address %p\n", Temp->polyTermPtrHuyD);
		printf("    Expo %d\n", Temp->polyTermPtrHuyD->expoHuyD);
		printf("     Coefficient \n");
		printf("      num: %d\n", Temp->polyTermPtrHuyD->coeffPtrHuyD->num);
		printf("      denom: %d\n", Temp->polyTermPtrHuyD->coeffPtrHuyD->denom);
		Temp = Temp->next;
		term++;
	}
	
}
