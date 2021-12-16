#include "CIS27HuyDPoly.h"
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
    return TPolyPtrHuyD();
}

TPolyPtrHuyD multiplyTwoPoly(TPolyPtrHuyD left, TPolyPtrHuyD right)
{
    return TPolyPtrHuyD();
}

void displayPoly(TPolyPtrHuyD current)
{
}
