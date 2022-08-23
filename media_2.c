#include <stdio.h>

int main() {
	
	float a, b, c, media;
	float peso = 10;

	scanf("%f\n%f\n%f", &a, &b, &c);

	media = (a * 0.2 + b * 0.3 + c * 0.5);

	printf("MEDIA = %.1f\n", media);

	return 0;
}
