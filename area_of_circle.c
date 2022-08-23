#include <stdio.h>
#include <math.h>

int main () {
	double r, A;
	double n = 3.14159;

	scanf("%lf", &r);
        A = n * pow(r, 2);
        printf("A=%0.4lf \n", A);

	return 0;
}
