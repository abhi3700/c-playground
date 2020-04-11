#include <stdio.h>

int cal_min(int);

int main(void)
{
	int year;
	printf("Enter the year:\n");
	scanf("%d", &year);
	printf("The no. of minutes in a year: %d\n", cal_min(year));

	return 0;
}

int cal_min(int year) {
	int res;
	// printf("%d\n", res);
	if (year % 4 == 0)		// leap year
	{
		res = 366 * 24 * 60;
		printf("if: %d\n", res);
	}
	else {
		res = 365 * 24 * 60;
		printf("else: %d\n", res);
	}
	return res;
}