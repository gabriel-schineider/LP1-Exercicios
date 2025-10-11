// Exercício 2

# include <stdio.h>

void main (void) {
	int num1; int num2;
	
	printf("Insira um número: ");
	scanf("%d", &num1);
	printf("Insira outro número: ");
	scanf("%d", &num2);
	
	if (num1 >= num2) {
		printf("%d é o maior número. \n", num1);
	} else {
		printf("%d é o maior número. \n", num2);
	}
}
