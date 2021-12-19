/*
* Program Name: cis27Fall2021Hw5
* Discussion: Hw5
* Written by: Huy Dang
* Date: 2021/12/19
*/
#pragma once
#ifndef CIS27HuyDPOLYTERM_H 
#define CIS27HuyDPOLYTERM_H 
#include "CIS27FractionHuyD.h" 
struct PolyTermHuyD {
    int expoHuyD;
    TFractionPtrHuyD coeffPtrHuyD;
};

// typedef 
typedef struct PolyTermHuyD TPolyTermHuyD;
typedef struct PolyTermHuyD* TPolyTermPtrHuyD;
typedef struct PolyTermHuyD* TPolyTermAddrHuyD;

// Required Function Prototypes For PolyTerm 

TPolyTermPtrHuyD createPolyTerm(void);
void updatePolyTerm(int termExponent, int n, int d,
    TPolyTermPtrHuyD current);

// Others as needed 

// Type Definition 
struct PolyTermNodeHuyD {
    TPolyTermPtrHuyD polyTermPtrHuyD;
    PolyTermNodeHuyD* next;
};

// typedef 
typedef struct PolyTermNodeHuyD TPolyTermNodeHuyD;
typedef struct PolyTermNodeHuyD* TPolyTermNodePtrHuyD;
typedef struct PolyTermNodeHuyD* TPolyTermNodeAddrHuyD;
typedef TPolyTermNodePtrHuyD TPolyListPtrHuyD;

// Required Function Prototypes For PolyTermNode 

TPolyTermNodePtrHuyD createPolyTermNode(void);
void updatePolyTermNode(int termExponent, int n, int d,
    TPolyTermNodePtrHuyD current);
#endif
