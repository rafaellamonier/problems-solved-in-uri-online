#include <stdio.h>
#include <stdlib.h>

int main () {

	int a, b, c, largerAB, largerABC;

	scanf("%d\n%d\n%d", &a, &b, &c);
	
	largerAB = (a + b + abs(a - b)) / 2;
	largerABC = (largerAB + c + abs(largerAB - c)) / 2;

	printf("%d eh o maior \n", largerABC);

	return 0;
}
