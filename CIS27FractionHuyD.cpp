#include "CIS27FractionHuyD.h"
#include <stdlib.h>
TFractionPtrHuyD createFraction(void)
{
	return TFractionPtrHuyD();
}

TFractionPtrHuyD createFraction(int n, int d)
{
	TFractionPtrHuyD test = (TFractionPtrHuyD)malloc(sizeof(FractionHuyD));
	test->num = n;
	test->denom = d;
	return test;
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
	TFractionPtrHuyD test = nullptr;
	test=(TFractionPtrHuyD)malloc(sizeof(FractionHuyD));
	test->denom = left->denom * right->denom;
	test->num = left->num * right->denom + left->denom * right->num;
	
	return test;
}

TFractionPtrHuyD multiplyFraction(const TFractionPtrHuyD left, const TFractionPtrHuyD right)
{
	TFractionPtrHuyD test = (TFractionPtrHuyD)malloc(sizeof(FractionHuyD));
	test->num = left->num * right->num;
	test->denom = left->denom * right->denom;
	return test;
}

TFractionPtrHuyD multiplyFraction(const TFractionPtrHuyD left, int right)
{
	TFractionPtrHuyD test = (TFractionPtrHuyD)malloc(sizeof(FractionHuyD));
	test->num = left->num * right;
	test->denom = left->denom;
	return test;
}
TFractionPtrHuyD multiplyFractionExpo(const TFractionPtrHuyD left, int expo)
{
	TFractionPtrHuyD test = (TFractionPtrHuyD)malloc(sizeof(FractionHuyD));
	test = left;
	int num = left->num;
	int de = left->denom;
	for (int i = 2; i < expo; i++)
	{
		test->num = test->num * num;
		test->denom = test->denom * de;

	}
	
	return test;
}

void displayFraction(const TFractionPtrHuyD current)
{
}


