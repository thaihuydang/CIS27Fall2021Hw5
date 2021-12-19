#include "CIS27HuyDPoly.h"
#include "CIS27HuyDHw5Utility.h"
#include <stdio.h> 
#include <stdlib.h> 
TPolyPtrHuyD createPoly(void)
{
    return TPolyPtrHuyD();
}

void updatePoly(int termExponent, int n, int d, TPolyPtrHuyD current)
{
}

void insertTermToPoly(TPolyTermPtrHuyD someTerm, TPolyPtrHuyD* current)
{
    TPolyListPtrHuyD newTpolylistHuyD;
    TPolyTermPtrHuyD temp = nullptr;
    TPolyTermNodePtrHuyD TempPolyTermNod=nullptr;
    TPolyPtrHuyD NewPoly;
    if (*current == NULL) {
        NewPoly = (TPolyPtrHuyD)malloc(sizeof(PolyHuyD));
        NewPoly->degreeHuyD = someTerm->expoHuyD;
        NewPoly->numTermHuyD = 1;
        NewPoly->polyListPtrHuyD = 
            (TPolyListPtrHuyD)malloc(sizeof(PolyTermNodeHuyD));
        updatePolyTermNode(someTerm->expoHuyD,
            someTerm->coeffPtrHuyD->num,
            someTerm->coeffPtrHuyD->denom
            ,NewPoly->polyListPtrHuyD);
        NewPoly->polyListPtrHuyD->next = nullptr;
        (*current) = NewPoly;
    }
    else
    {
        newTpolylistHuyD = (*current)->polyListPtrHuyD;
        while (newTpolylistHuyD)
        {
            if (newTpolylistHuyD->polyTermPtrHuyD->expoHuyD > someTerm->expoHuyD) 
            {
                if (newTpolylistHuyD->next)
                {
					newTpolylistHuyD = newTpolylistHuyD->next;
                }
                else
                {
                    newTpolylistHuyD->next = 
                        (TPolyTermNodePtrHuyD)malloc(sizeof(PolyTermNodeHuyD));
                    updatePolyTermNode(someTerm->expoHuyD, 
                        someTerm->coeffPtrHuyD->num, 
                        someTerm->coeffPtrHuyD->denom
                        , newTpolylistHuyD->next);
                    newTpolylistHuyD->next->next = nullptr;
                    (*current)->numTermHuyD++;
                    if ((*current)->degreeHuyD < someTerm->expoHuyD) {
                        (*current)->degreeHuyD = someTerm->expoHuyD;
                    }
                    break;
                }
                
            }
            else if(newTpolylistHuyD->polyTermPtrHuyD->expoHuyD == 
                    someTerm->expoHuyD)
            {
                newTpolylistHuyD->polyTermPtrHuyD->coeffPtrHuyD = 
                    addFraction(newTpolylistHuyD->polyTermPtrHuyD->
                        coeffPtrHuyD, someTerm->coeffPtrHuyD);
            }
            else
            {
                temp = (TPolyTermPtrHuyD)malloc(sizeof(PolyTermHuyD));
                updatePolyTerm(newTpolylistHuyD->polyTermPtrHuyD->expoHuyD, 
                    newTpolylistHuyD->polyTermPtrHuyD->coeffPtrHuyD->num, 
                    newTpolylistHuyD->polyTermPtrHuyD->coeffPtrHuyD->denom
                    , temp );
                
                updatePolyTerm(someTerm->expoHuyD, 
                    someTerm->coeffPtrHuyD->num, 
                    someTerm->coeffPtrHuyD->denom
                    , newTpolylistHuyD->polyTermPtrHuyD);
                TempPolyTermNod = 
                    (TPolyTermNodePtrHuyD)malloc(sizeof(PolyTermNodeHuyD));
                TempPolyTermNod->next = nullptr;
                updatePolyTermNode(temp->expoHuyD, 
                    temp->coeffPtrHuyD->num, 
                    temp->coeffPtrHuyD->denom
                    , TempPolyTermNod);
                /*temp->next = newTpolylistHuyD->next;*/
                newTpolylistHuyD->next = TempPolyTermNod;
                if ((*current)->degreeHuyD < someTerm->expoHuyD) {
                    (*current)->degreeHuyD = someTerm->expoHuyD;
                }
               
                (*current)->numTermHuyD++;
                break;


            }
        }
    }
}

void AddTermToPoly(TPolyTermPtrHuyD someTerm, PolyHuyD*& current)
{
    TPolyListPtrHuyD newTpolylistHuyD;
    TPolyTermPtrHuyD temp = nullptr;
    TPolyTermNodePtrHuyD TempPolyTermNod = nullptr;
    TPolyPtrHuyD NewPoly;
    if (current == NULL) {
        
			NewPoly = (TPolyPtrHuyD)malloc(sizeof(PolyHuyD));
			NewPoly->degreeHuyD = someTerm->expoHuyD;
			NewPoly->numTermHuyD = 1;
			NewPoly->polyListPtrHuyD =
				(TPolyListPtrHuyD)malloc(sizeof(PolyTermNodeHuyD));
			updatePolyTermNode(someTerm->expoHuyD,
				someTerm->coeffPtrHuyD->num,
				someTerm->coeffPtrHuyD->denom
				, NewPoly->polyListPtrHuyD);
			NewPoly->polyListPtrHuyD->next = nullptr;
			(current) = NewPoly;
       
        
    }
    else
    {
        
			newTpolylistHuyD = (current)->polyListPtrHuyD;
			while (newTpolylistHuyD)
			{
				if (newTpolylistHuyD->polyTermPtrHuyD->expoHuyD > someTerm->expoHuyD)
				{
					if (newTpolylistHuyD->next)
					{
						newTpolylistHuyD = newTpolylistHuyD->next;
					}
					else
					{
						newTpolylistHuyD->next =
							(TPolyTermNodePtrHuyD)malloc(sizeof(PolyTermNodeHuyD));
						updatePolyTermNode(someTerm->expoHuyD,
							someTerm->coeffPtrHuyD->num,
							someTerm->coeffPtrHuyD->denom
							, newTpolylistHuyD->next);
						newTpolylistHuyD->next->next = nullptr;
						(current)->numTermHuyD++;
						if ((current)->degreeHuyD < someTerm->expoHuyD) {
							(current)->degreeHuyD = someTerm->expoHuyD;
						}
						break;
					}

				}
				else if (newTpolylistHuyD->polyTermPtrHuyD->expoHuyD ==
					someTerm->expoHuyD)
				{
					newTpolylistHuyD->polyTermPtrHuyD->coeffPtrHuyD =
						addFraction(newTpolylistHuyD->polyTermPtrHuyD->
							coeffPtrHuyD, someTerm->coeffPtrHuyD);
					CheckFraction(newTpolylistHuyD->polyTermPtrHuyD->coeffPtrHuyD);
					
                    if (newTpolylistHuyD->polyTermPtrHuyD->coeffPtrHuyD->num) {
                        newTpolylistHuyD = newTpolylistHuyD->next;
                    }
                    else
                    {
                        current->numTermHuyD--;
						if (newTpolylistHuyD->next) {
                            newTpolylistHuyD->polyTermPtrHuyD = newTpolylistHuyD->next->polyTermPtrHuyD;
						}
						else
						{
							newTpolylistHuyD->polyTermPtrHuyD = nullptr;
						}
                    }
                   
                    
                    break;
				}
				else//add more
				{
					temp = (TPolyTermPtrHuyD)malloc(sizeof(PolyTermHuyD));
					updatePolyTerm(newTpolylistHuyD->polyTermPtrHuyD->expoHuyD,
						newTpolylistHuyD->polyTermPtrHuyD->coeffPtrHuyD->num,
						newTpolylistHuyD->polyTermPtrHuyD->coeffPtrHuyD->denom
						, temp);

					updatePolyTerm(someTerm->expoHuyD,
						someTerm->coeffPtrHuyD->num,
						someTerm->coeffPtrHuyD->denom
						, newTpolylistHuyD->polyTermPtrHuyD);
					TempPolyTermNod =
						(TPolyTermNodePtrHuyD)malloc(sizeof(PolyTermNodeHuyD));
					TempPolyTermNod->next = nullptr;
					updatePolyTermNode(temp->expoHuyD,
						temp->coeffPtrHuyD->num,
						temp->coeffPtrHuyD->denom
						, TempPolyTermNod);
                    TempPolyTermNod->next = newTpolylistHuyD->next;
					/*temp->next = newTpolylistHuyD->next;*/
					newTpolylistHuyD->next = TempPolyTermNod;
					if ((current)->degreeHuyD < someTerm->expoHuyD) {
						(current)->degreeHuyD = someTerm->expoHuyD;
					}

					(current)->numTermHuyD++;
					break;


				}
			}
        
        
    }
}

void MultiplyTermToPoly(TPolyTermPtrHuyD someTerm, PolyHuyD*& current)
{
    TPolyListPtrHuyD newTpolylistHuyD;
    TPolyTermPtrHuyD temp = nullptr;
    TPolyTermNodePtrHuyD TempPolyTermNod = nullptr;
    TPolyPtrHuyD NewPoly;
    if (current == NULL) {
        NewPoly = (TPolyPtrHuyD)malloc(sizeof(PolyHuyD));
        NewPoly->degreeHuyD = someTerm->expoHuyD;
        NewPoly->numTermHuyD = 1;
        NewPoly->polyListPtrHuyD =
            (TPolyListPtrHuyD)malloc(sizeof(PolyTermNodeHuyD));
        updatePolyTermNode(someTerm->expoHuyD,
            someTerm->coeffPtrHuyD->num,
            someTerm->coeffPtrHuyD->denom
            , NewPoly->polyListPtrHuyD);
        NewPoly->polyListPtrHuyD->next = nullptr;
        (current) = NewPoly;
    }
    else
    {
        newTpolylistHuyD = (current)->polyListPtrHuyD;
        while (newTpolylistHuyD)
        {
           
            newTpolylistHuyD->polyTermPtrHuyD->expoHuyD += someTerm->expoHuyD;
            newTpolylistHuyD->polyTermPtrHuyD->coeffPtrHuyD =
                multiplyFraction(newTpolylistHuyD->polyTermPtrHuyD->
                    coeffPtrHuyD, someTerm->coeffPtrHuyD);
            CheckFraction(newTpolylistHuyD->polyTermPtrHuyD->coeffPtrHuyD);
            newTpolylistHuyD = newTpolylistHuyD->next;

        }
    }
}


TPolyTermPtrHuyD removeTermPoly(int termExponent, TPolyPtrHuyD current)
{
    return TPolyTermPtrHuyD();
}

TFractionPtrHuyD evaluatePoly(TPolyPtrHuyD current)
{
    return TFractionPtrHuyD();
}

TPolyPtrHuyD addTwoPoly(TPolyPtrHuyD left, TPolyPtrHuyD right)
{
    TPolyPtrHuyD temp = nullptr;
    TPolyListPtrHuyD newTpolylistHuyD;
    newTpolylistHuyD = left->polyListPtrHuyD;
    while (newTpolylistHuyD)
    {
        AddTermToPoly(newTpolylistHuyD->polyTermPtrHuyD, temp);
        newTpolylistHuyD = newTpolylistHuyD->next;
    }
    free(newTpolylistHuyD);
    newTpolylistHuyD = nullptr;
    newTpolylistHuyD = right->polyListPtrHuyD;
    while (newTpolylistHuyD)
    {
        AddTermToPoly(newTpolylistHuyD->polyTermPtrHuyD, temp);
        newTpolylistHuyD = newTpolylistHuyD->next;
    }
    
    return temp;
}

TPolyPtrHuyD multiplyTwoPoly(TPolyPtrHuyD left, TPolyPtrHuyD right)
{
    TPolyPtrHuyD result = nullptr;
    PolyTermNodeHuyD Temp ;
    TPolyListPtrHuyD newTpolylistHuyDLeft;
    TPolyListPtrHuyD newTpolylistHuyDRight;
    newTpolylistHuyDLeft = left->polyListPtrHuyD;
    newTpolylistHuyDRight = right->polyListPtrHuyD;
    while (newTpolylistHuyDLeft)
    {
        while (newTpolylistHuyDRight)
        {
            Temp.polyTermPtrHuyD = (TPolyTermPtrHuyD)malloc(sizeof(PolyTermHuyD));
            Temp.polyTermPtrHuyD->coeffPtrHuyD = multiplyFraction
            (newTpolylistHuyDLeft->polyTermPtrHuyD->coeffPtrHuyD 
                , newTpolylistHuyDRight->polyTermPtrHuyD->coeffPtrHuyD);
            Temp.polyTermPtrHuyD->expoHuyD = newTpolylistHuyDLeft->
                polyTermPtrHuyD->expoHuyD + newTpolylistHuyDRight->
                polyTermPtrHuyD->expoHuyD;
            AddTermToPoly(Temp.polyTermPtrHuyD, result);
            newTpolylistHuyDRight = newTpolylistHuyDRight->next;
        }
        newTpolylistHuyDRight = right->polyListPtrHuyD;
        newTpolylistHuyDLeft = newTpolylistHuyDLeft->next;
    }
    /*free(newTpolylistHuyDLeft);
    newTpolylistHuyDLeft = nullptr;
    newTpolylistHuyDLeft = right->polyListPtrHuyD;
    while (newTpolylistHuyDLeft)
    {
        MultiplyTermToPoly(newTpolylistHuyDLeft->polyTermPtrHuyD, result);
        newTpolylistHuyDLeft = newTpolylistHuyDLeft->next;
    }*/

    return result;
}

void displayPoly(TPolyPtrHuyD current)
{
}
