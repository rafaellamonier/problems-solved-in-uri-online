#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int array[] = {5, 8, 3, 3, 5, 9};

	// Passo 1 => insira o tamanho do array em uma variável name
	int sizeArray = sizeof(array) / sizeof(array[0]);


	for (int i = 0; i < sizeArray; i++) {
		printf("%d\n", array[i]);
		
	}

	// passo 2 => Use o laço for para ler os elementos do array e arazenar seu index na variável i
	// Para obter os elementos duplicados de um array, precisamos usar dois laços for. Onde o primeiro começa com size 0 
	// outro loop seleciona cada elemento do array e compara com o elemento correspondente para obter os elementos duplicados. E a estrutura do loop interno é.
	//for (int i = 0; sizeArray > i; i++) {
	//	for (int j = i+1; j < sizeArray; j++) {


	//	}	
	//}




	return 0;
}
