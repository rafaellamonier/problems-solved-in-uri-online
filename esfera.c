#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main () {

	/*
	 * Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3)*pi*R³. 
	 * Considere (atribua) para pi o valor de 3.14159.
	 * */

	int r;
	double result;
	scanf("%d", &r);

	result = (4.0 / 3) * PI * pow(r, 3);

	printf("VOLUME = %.3lf\n", result);
	

	return 0;
}
