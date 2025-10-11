// Exercício 5

# include <stdio.h>

void main (void) {
	double num, soma = 0;
	
	printf("Digite um número: ");
	scanf("%lf", &num);
	
	while(num != 0) {
	soma = soma + num;
	printf("Digite um número: ");
	scanf("%lf", &num);
	}
	
	printf("A soma dos números digitados resulta em: %lf \n", soma);
}
