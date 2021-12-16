#include "CIS27HuyDPolyTerm.h"
#include <stdlib.h> 
TPolyTermPtrHuyD createPolyTerm(void)
{
	return TPolyTermPtrHuyD();
}

void updatePolyTerm(int termExponent, int n, int d, TPolyTermPtrHuyD current)
{
	current->coeffPtrHuyD = (TFractionPtrHuyD)malloc(sizeof(TFractionHuyD));
	current->coeffPtrHuyD->num = n;
	current->coeffPtrHuyD->denom = d;
	current->expoHuyD = termExponent;
}

TPolyTermNodePtrHuyD createPolyTermNode(void)
{
	return TPolyTermNodePtrHuyD();
}



TPolyTermNodePtrHuyD createPolyTermNode(int expo, int num, int denom)
{
	return TPolyTermNodePtrHuyD();
}

void updatePolyTermNode(int termExponent, int n, int d, TPolyTermNodePtrHuyD current)
{
	current->polyTermPtrHuyD = (TPolyTermPtrHuyD)malloc(sizeof(TPolyTermHuyD));
	current->polyTermPtrHuyD->coeffPtrHuyD = (TFractionPtrHuyD)malloc(sizeof(TFractionHuyD));
	current->polyTermPtrHuyD->coeffPtrHuyD->num = n;
	current->polyTermPtrHuyD->coeffPtrHuyD->denom = d;
	current->polyTermPtrHuyD->expoHuyD = termExponent;
}
