#include <stdio.h>

int main () {

	double a, b, media;
	double peso = 1.1;

	scanf("%lf\n%lf", &a, &b);

	media = (a * 3.5 + b * 7.5) / 11;

	printf("%.5lf \n", media);

	return 0;
}
