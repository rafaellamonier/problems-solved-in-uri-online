#include <stdio.h>

int main () {
	
	int number_of_workers;
	float hours_worked,
	    value_by_hour,
	    wage;

	scanf("%d", &number_of_workers);
	scanf("%f", &hours_worked);
	scanf("%f", &value_by_hour);

	wage = hours_worked * value_by_hour;

	printf("NUMBER = %d\n", number_of_workers);
	printf("SALARY = U$ %.2f\n", wage);
	
	return 0;
}
