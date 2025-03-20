#include <stdio.h>
#include "header.h"
#include <math.h>
float paymentPerMonth(int principal, float interestRate, int paymentNumber) {
	float payment = (interestRate*principal)/(1-pow(1+interestRate,-1*paymentNumber));
	return payment;
}