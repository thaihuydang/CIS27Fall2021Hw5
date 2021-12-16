#pragma once
#ifndef CIS27HuyDFraction_H
#define CIS27HuyDFraction_H
struct FractionHuyD
{
	int num;
	int denom;
};

typedef struct FractionHuyD TFractionHuyD;
typedef struct FractionHuyD* TFractionPtrHuyD;
typedef struct FractionHuyD* TFractionAddrHuyD;

// Required Function Prototypes For Fraction 
TFractionPtrHuyD createFraction(void);
void updateFraction(TFractionPtrHuyD current,
	const TFractionPtrHuyD withAnother);
void updateFractionWithValue(TFractionPtrHuyD current,
	int n, int d);
int gcd(int, int);

int isPalindroneInt(int);
int isPalindromeFraction(const TFractionPtrHuyD current);

TFractionPtrHuyD addFraction(const TFractionPtrHuyD left,
	const TFractionPtrHuyD right);
TFractionPtrHuyD multiplyFraction(const TFractionPtrHuyD left,
	const TFractionPtrHuyD right);
TFractionPtrHuyD multiplyFraction(const TFractionPtrHuyD left,
	int right);

void displayFraction(const TFractionPtrHuyD current);

#endif