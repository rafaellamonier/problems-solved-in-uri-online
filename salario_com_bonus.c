#include <stdio.h>

int main() {

	char name[20];
	double wage, number_of_sales, total;

	scanf("%s", name);
	scanf("%lf\n%lf", &wage, &number_of_sales);

	// process
	// 15% de commissão por venda
	// retornar o total a receber no final do mês
	total = number_of_sales * 0.15 + wage;

	printf("TOTAL = R$ %.2lf\n", total);

	return 0;
}
