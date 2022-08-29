#include <stdio.h>
#include <stdlib.h>

int main() {

	/*
	 * Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em KM) e o total de combustivel gasto (em litros).
	*/	

	//distancia percorrida
	int distancia_percorrida;
	float combustivel_gasto, media_combustivel_gasto;

	scanf("%d", &distancia_percorrida);
	scanf("%f", &combustivel_gasto);

	// process
	media_combustivel_gasto = distancia_percorrida / combustivel_gasto;
	
	printf("%.3f km/l\n", media_combustivel_gasto);

	return 0;
}
