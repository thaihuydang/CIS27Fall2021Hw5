#include "CIS27HuyDHw5Utility.h"

#include <stdio.h>
#include <stdlib.h>

void RunMenuHw5HuyD()
{
	int optionHuyD = 0;
	TPolyPtrHuyD Poly1HuyD=nullptr;
	TPolyPtrHuyD Poly2HuyD=nullptr;
	TPolyPtrHuyD PolyResult = nullptr;
	TPolyListPtrHuyD MynodePolyTerm;

	int n, d;
	TFractionPtrHuyD XFraction;
	TFractionPtrHuyD MyResultFraction=nullptr;
	TFractionPtrHuyD Temp;
	int expo;
	bool flag = true;
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
		printf("*           MENU - HW #5                *\n");
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
			printf(" Initializing 2 Polynomials -\n");
			printf("  Calling init() -\n");
			runHw5submenuHuyD(Poly1HuyD, Poly2HuyD);
			break;
		case 2:
			if (Poly1HuyD && Poly2HuyD) {
				printf(" Evaluating Polynomials -\n");
				printf(" Enter the value (Fraction) to be evaluated with -\n");
				printf("  num: ");
				scanf_s("%d", &n);
				printf("  denom: ");
				scanf_s("%d", &d);
			
				XFraction = createFraction(n, d);
				
				MynodePolyTerm = (Poly1HuyD)->polyListPtrHuyD;
				while (MynodePolyTerm)
				{
					if (MynodePolyTerm->polyTermPtrHuyD->expoHuyD)
					{
						
						Temp = multiplyFractionExpo(XFraction, 
							MynodePolyTerm->polyTermPtrHuyD->expoHuyD);
						Temp = multiplyFraction(Temp, MynodePolyTerm->polyTermPtrHuyD->coeffPtrHuyD);
						if (MyResultFraction) {
							MyResultFraction = addFraction(MyResultFraction, Temp);
						}
						else
						{
							MyResultFraction = (TFractionPtrHuyD)malloc(sizeof(TFractionHuyD));
							MyResultFraction->num = Temp->num;
							MyResultFraction->denom = Temp->denom;
						}
						
					}
					else
					{
						if (MyResultFraction) {
							MyResultFraction = addFraction(MyResultFraction,
								MynodePolyTerm->polyTermPtrHuyD->coeffPtrHuyD);
						}
						else
						{
							MyResultFraction = (TFractionPtrHuyD)malloc(sizeof(TFractionHuyD));
							MyResultFraction->num = MynodePolyTerm->
								polyTermPtrHuyD->coeffPtrHuyD->num;
							MyResultFraction->denom = MynodePolyTerm->
								polyTermPtrHuyD->coeffPtrHuyD->denom;
						}
						
					}
					MynodePolyTerm = MynodePolyTerm->next;
				}
				CheckFraction(MyResultFraction);
				printf("  Poly #1 at x (%d/%d) = (%d/%d)\n",XFraction->num,
					XFraction->denom, MyResultFraction->num, 
					MyResultFraction->denom);
				free(MyResultFraction);
				MyResultFraction = nullptr;
				MynodePolyTerm = (Poly2HuyD)->polyListPtrHuyD;
				while (MynodePolyTerm)
				{
					if (MynodePolyTerm->polyTermPtrHuyD->expoHuyD)
					{

						Temp = multiplyFractionExpo(XFraction,
							MynodePolyTerm->polyTermPtrHuyD->expoHuyD);
						Temp = multiplyFraction(Temp, MynodePolyTerm->polyTermPtrHuyD->coeffPtrHuyD);
						if (MyResultFraction) {
							MyResultFraction = addFraction(MyResultFraction, Temp);
						}
						else
						{
							MyResultFraction = (TFractionPtrHuyD)malloc(sizeof(TFractionHuyD));
							MyResultFraction->num = Temp->num;
							MyResultFraction->denom = Temp->denom;
						}

					}
					else
					{
						if (MyResultFraction) {
							MyResultFraction = addFraction(MyResultFraction,
								MynodePolyTerm->polyTermPtrHuyD->coeffPtrHuyD);
						}
						else
						{
							MyResultFraction = (TFractionPtrHuyD)malloc(sizeof(TFractionHuyD));
							MyResultFraction->num = MynodePolyTerm->
								polyTermPtrHuyD->coeffPtrHuyD->num;
							MyResultFraction->denom = MynodePolyTerm->
								polyTermPtrHuyD->coeffPtrHuyD->denom;
						}

					}
					MynodePolyTerm = MynodePolyTerm->next;
				}
				CheckFraction(MyResultFraction);
				printf("  Poly #2 at x (%d/%d) = (%d/%d)\n",XFraction->num,
					XFraction->denom, MyResultFraction->num, 
					MyResultFraction->denom);
				free(MyResultFraction);
				MyResultFraction = nullptr;

			}
			else
			{
				printf("\n  Not appropriate as there are no Fraction objects! \n");
			}
			break;
		case 3:
			if (Poly1HuyD && Poly2HuyD) {
				printf(" Checking for Palindrome - \n");
				MynodePolyTerm = Poly1HuyD->polyListPtrHuyD;
				while (MynodePolyTerm)
				{
					if (!isFractionPalindromeHuyD(MynodePolyTerm->polyTermPtrHuyD->coeffPtrHuyD)) {
						printf("\n    Poly #1 not palinrom\n");
						flag = false;
						break;
					}
					MynodePolyTerm = MynodePolyTerm->next;
				}
				if (flag) {
					printf("\n    Poly #1 is palindrome\n");
				}
				flag = true;
				MynodePolyTerm = Poly2HuyD->polyListPtrHuyD;
				while (MynodePolyTerm)
				{
					if (!isFractionPalindromeHuyD(MynodePolyTerm->
						polyTermPtrHuyD->coeffPtrHuyD)) {
						printf("\n    Poly #2 not palindrome\n");
						flag = false;
						break;
					}
					MynodePolyTerm = MynodePolyTerm->next;
				}
				if (flag) {
					printf("\n    Poly #2 is palindrome\n");
				}

			}
			else
			{
				printf("\n  Not appropriate as there are no Polynomial objects! \n");
			}
			break;
		case 4:
			if (Poly1HuyD && Poly2HuyD) {
				printf(" Adding 2 Polynomials - ");
				PolyResult = addTwoPoly(Poly1HuyD, Poly2HuyD);
			}
			else
			{
				printf("\n Cannot choose this option as there are no"
					"Polynomial objects!\n");
			}

			break;
		case 5:
			if (Poly1HuyD && Poly2HuyD) {
				printf(" Multiply 2 Polynomials - ");
				PolyResult = multiplyTwoPoly(Poly1HuyD, Poly2HuyD);
			}
			else
			{
				printf("\n Cannot choose this option as there are no"
					"Polynomial objects!\n");
			}

			break;
		case 6:
			if ((PolyResult)) {
				printf("  Displaying the resulting Polynomial -\n");
				printf("    Address: %p\n", PolyResult);
				printf("    Degree: %d\n", PolyResult->degreeHuyD);
				printf("    Number of Terms: %d\n", PolyResult->degreeHuyD);
			}
			else 
			{
				printf(" Not appropriate as there are no Polynomials!");
			}
			break;
		
		case 7:
			DisplayPolynomial(PolyResult);
			break;
		case 8:
			printf("Have fun!");
			break;
		default:
			printf("\nWRONG OPTION!\n");
			break;
		}
	} while (optionHuyD != 8);

}
void runHw5submenuHuyD(TPolyPtrHuyD& F1, TPolyPtrHuyD& F2) {
	int optionHuyD = 0;
	int optionterm = -1;
	int optionexpo;
	int optionupdate;
	int exp, n, d;
	int term=1;
	TFractionHuyD* FractionTemp = nullptr;
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
						FractionTemp = (TFractionHuyD*)malloc(sizeof(TFractionHuyD));
						/*FractionTemp = createFraction(n, d);*/
						FractionTemp->num = n;
						FractionTemp->denom = d;
						CheckFraction(FractionTemp);
						updatePolyTerm(exp, FractionTemp->num,
							FractionTemp->denom, NewPolyterm);
						/*F1 = (TPolyPtrHuyD*)malloc(sizeof(TPolyPtrHuyD));*/
						insertTermToPoly(NewPolyterm, &F1);
						free(FractionTemp);
						FractionTemp = nullptr;
						break;
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
						FractionTemp = (TFractionHuyD*)malloc(sizeof(TFractionHuyD));
						/*FractionTemp = createFraction(n, d);*/
						FractionTemp->num = n;
						FractionTemp->denom = d;
						CheckFraction(FractionTemp);
						updatePolyTerm(exp, FractionTemp->num, 
							FractionTemp->denom, NewPolyterm);
						insertTermToPoly(NewPolyterm, &F2);
						free(FractionTemp);
						FractionTemp = nullptr;
						break;
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
						FractionTemp = (TFractionHuyD*)malloc(sizeof(TFractionHuyD));
						/*FractionTemp = createFraction(n, d);*/
						FractionTemp->num = n;
						FractionTemp->denom = d;
						CheckFraction(FractionTemp);
						updatePolyTerm(exp, n, d, NewPolyterm);
						insertTermToPoly(NewPolyterm, &F1);
						free(FractionTemp);
						FractionTemp = nullptr;
						break;

					case 3:
						DisplayPolynomial(F1);
						break;
						case 4:
							printf("  Return to previous menu!\n");
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
		case 4:
			if (F1 && F2) {
				printf("Displaying 2 Polynomials -\n");
				printf(" Poly #1\n");

				DisplayPolynomial(F1);
				printf(" Poly #2\n");
				DisplayPolynomial(F2);
			}
			else
			{
				printf("  Wrong option!\n");
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
	printf("  Degree: %d\n", F1->degreeHuyD);
	printf("  Number of Term: %d\n", F1->numTermHuyD);
	Temp = F1->polyListPtrHuyD;
	while (Temp && Temp->polyTermPtrHuyD)
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
bool isFractionPalindromeHuyD(TFractionPtrHuyD F1)
{
	if (CheckNumberPalindromeHuyD(F1->num) && CheckNumberPalindromeHuyD(F1->denom)) {
		return true;
	}
	return false;
}
bool CheckNumberPalindromeHuyD(int number)
{
	int* array;
	int count = 0;
	int mynumbertocount = 0;
	int tempcount = 0;

	if (number < 0) {
		number = -number;
	}
	mynumbertocount = number;
	while (mynumbertocount > 0)
	{
		count++;
		mynumbertocount = mynumbertocount / 10;
	}
	array = new int[count];
	while (number > 0)
	{
		int temp = number % 10;
		array[tempcount] = temp;
		tempcount++;
		number = number / 10;
	}
	for (int i = 0; i < count / 2; i++) {
		if (array[i] != array[count - 1 - i])
		{
			delete[] array;
			array = nullptr;
			return false;
		} // if    
	}
	delete[] array;
	array = nullptr;
	return true;
}
void CheckFraction(TFractionHuyD* F1) {
	int number = 0;
	if ((F1->denom < 0 && F1->num < 0) || (F1->num > 0 && F1->denom < 0)) {
		F1->denom = -F1->denom;
		F1->num = -F1->num;
	}

	number = CalculatenumbergccdHuyD(F1->num, F1->denom);
	F1->num = F1->num / number;
	F1->denom = F1->denom / number;
}
int CalculatenumbergccdHuyD(int number1HuyD, int number2HuyD)
{
	if (number1HuyD < 0) {
		number1HuyD = -number1HuyD;
	}
	if (number1HuyD && number2HuyD && number1HuyD > number2HuyD) {
		number1HuyD = number1HuyD % number2HuyD;
		CalculatenumbergccdHuyD(number1HuyD, number2HuyD);
	}
	else if (number1HuyD < number2HuyD && number1HuyD && number2HuyD)
	{
		number2HuyD = number2HuyD % number1HuyD;
		CalculatenumbergccdHuyD(number1HuyD, number2HuyD);
	}
	else if (number2HuyD == 0) {
		return number1HuyD;
	}
	else
	{
		return number2HuyD;
	}

}

