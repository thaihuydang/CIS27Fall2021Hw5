#pragma once
#ifndef CIS27HuyDPOLY_H 
#define CIS27HuyDPOLY_H 
#include "CIS27FractionHuyD.h" 
#include "cis27HuyDPolyTerm.h"
// Type Definition 
struct PolyHuyD {
    int degreeHuyD;
    int numTermHuyD;
    TPolyListPtrHuyD polyListPtrHuyD;
};

// typedef 

typedef struct PolyHuyD TPolyHuyD;
typedef struct PolyHuyD* TPolyPtrHuyD;
typedef struct PolyHuyD* TPolyAddrHuyD;

// Required Function Prototypes For PolyList 

TPolyPtrHuyD createPoly(void);
void updatePoly(int termExponent, int n, int d,
    TPolyPtrHuyD current);

void insertTermToPoly(TPolyTermPtrHuyD someTerm,
    TPolyPtrHuyD* current);
TPolyTermPtrHuyD removeTermPoly(int termExponent,
    TPolyPtrHuyD current);

TFractionPtrHuyD evaluatePoly(TPolyPtrHuyD current);
TPolyPtrHuyD addTwoPoly(TPolyPtrHuyD left,
    TPolyPtrHuyD right);
TPolyPtrHuyD multiplyTwoPoly(TPolyPtrHuyD left,
    TPolyPtrHuyD right);

void displayPoly(TPolyPtrHuyD current);
#endif
