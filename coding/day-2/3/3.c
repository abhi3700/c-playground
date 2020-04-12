#include <stdio.h>

#define BILL_AMOUNT_ONE 6.07f
#define PAY_AMOUNT_ONE 10.00f

#define BILL_AMOUNT_TWO 12.36f
#define PAY_AMOUNT_TWO 20.00f

float calc_change(float b, float p);
int calc_dollars(float c);


int main(void) {
	printf("The change for bill 1: %f\n", calc_change(BILL_AMOUNT_ONE, PAY_AMOUNT_ONE));
	printf("The dollars for bill 1: %d\n", calc_dollars(calc_change(PAY_AMOUNT_ONE, BILL_AMOUNT_ONE)));

	printf("The change for bill 2: %f\n", calc_change(BILL_AMOUNT_TWO, PAY_AMOUNT_TWO));
	printf("The dollars for bill 2: %d\n", calc_dollars(calc_change(PAY_AMOUNT_TWO, BILL_AMOUNT_TWO)));

	return 0;
}

int calc_dollars(float c) {
	int res = 0;
	res = (int)c/100;
	return res;
}

float calc_change(float b, float p) {
	float res = 0.0f;
	res = ((p - b) * 10);
	return res;
}
