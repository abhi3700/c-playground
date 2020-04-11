#include <stdio.h>

#define DAYS_IN_YEAR 365
#define HOUR_IN_DAY 24
#define MINUTES_IN_HOUR 60

int calc_min_yr(int, int, int);

int main(void) {
	printf("No. of days in year: %d\n", DAYS_IN_YEAR);
	printf("No. of hours in day: %d\n", HOUR_IN_DAY);
	printf("No. of minutes in hour: %d\n", MINUTES_IN_HOUR);

	printf("No. of minutes in a year: %d\n", calc_min_yr(DAYS_IN_YEAR, HOUR_IN_DAY,  MINUTES_IN_HOUR));
	return 0;
}


int calc_min_yr(int year, int day, int hr) {
	int res = 0;
	res = ((year * day) * hr);
	return res;
}
