#include "CIS27FractionHuyD.h"
#include <stdlib.h>
TFractionPtrHuyD createFraction(void)
{
	return TFractionPtrHuyD();
}

void updateFraction(TFractionPtrHuyD current, const TFractionPtrHuyD withAnother)
{
}

void updateFractionWithValue(TFractionPtrHuyD current, int n, int d)
{
}

int gcd(int, int)
{
	return 0;
}

int isPalindroneInt(int)
{
	return 0;
}

int isPalindromeFraction(const TFractionPtrHuyD current)
{
	return 0;
}

TFractionPtrHuyD addFraction(const TFractionPtrHuyD left, const TFractionPtrHuyD right)
{
	TFractionPtrHuyD test=(TFractionPtrHuyD)malloc(sizeof(FractionHuyD));
	test->num = left->num * right->denom + left->denom * right->num;
	test->denom = left->denom * right->denom;
	return test;
}

TFractionPtrHuyD multiplyFraction(const TFractionPtrHuyD left, const TFractionPtrHuyD right)
{
	return TFractionPtrHuyD();
}

TFractionPtrHuyD multiplyFraction(const TFractionPtrHuyD left, int right)
{
	TFractionPtrHuyD test = (TFractionPtrHuyD)malloc(sizeof(FractionHuyD));
	test->num = left->num * right;
	test->denom = left->denom;
	return test;
}

void displayFraction(const TFractionPtrHuyD current)
{
}
