#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int tempo_gasto/*em Horas*/, velocidade_media/*em KM/h*/;
	float litros;

	scanf("%d\n%d", &tempo_gasto, &velocidade_media);	

	litros = tempo_gasto * velocidade_media / 12.0;

	printf("%.3f\n", litros);

	return 0;
}
