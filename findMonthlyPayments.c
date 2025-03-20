#include <stdio.h>
#include "header.h"
//#include "paymentPerMonth.c"
void findMonthlyPayments(int price, int downPayment, float annualInterestRate, int paymentNumber) {
	int principal = price - downPayment;
	float interestRate =annualInterestRate/12;
	float payment = paymentPerMonth(principal, interestRate, paymentNumber);
	printf("$%d over %d payments = $%.2f per month.\n",principal, paymentNumber, payment);
	return;
}