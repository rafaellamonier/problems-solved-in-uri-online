#include <stdio.h>

int main () {
	/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.*/

	int code_ask_1, number_ask_1, code_ask_2, number_ask_2;
	double price_ask_1, price_ask_2, value_of_pay;

	scanf("%i", &code_ask_1);
	scanf("%i", &number_ask_1);
	scanf("%lf", &price_ask_1);
	scanf("%i", &code_ask_2);
	scanf("%i", &number_ask_2);
	scanf("%lf", &price_ask_2);

	// process
	value_of_pay = (number_ask_1 * price_ask_1) + (number_ask_2 * price_ask_2);

	printf("VALOR A PAGAR: R$ %.2lf\n", value_of_pay);

	return 0;
}
