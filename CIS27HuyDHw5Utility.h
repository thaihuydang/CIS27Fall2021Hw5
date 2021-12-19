/*
* Program Name: cis27Fall2021Hw5
* Discussion: Hw5
* Written by: Huy Dang
* Date: 2021/12/19
*/
#pragma once
#ifndef CIS27HuyDUtility_H
#define CIS27HuyDUtility_H
#include "CIS27HuyDPoly.h"
void RunMenuHw5HuyD();

void runHw5submenuHuyD(TPolyPtrHuyD& F1, TPolyPtrHuyD& F2);
void DisplayPolynomial(TPolyPtrHuyD F1);
bool isFractionPalindromeHuyD(TFractionPtrHuyD F1);
bool CheckNumberPalindromeHuyD(int number);
void CheckFraction(TFractionHuyD* F1);
int CalculatenumbergccdHuyD(int number1HuyD, int number2HuyD);

#endif // !"CIS27HuyDUtility_H"

