// Exercício 8 em C

# include <stdio.h>

int main (void) {
	int i = 0;
	int num1 = 0;
	int num2 = 0;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	if (num1 > num2) {
		int auxiliarTemporaria;
		auxiliarTemporaria = num1;
		num1 = num2;
		num2 = auxiliarTemporaria;
	}
	
	for (i = (num1+1); i < num2; i++) {
		printf("%d \n", i);
	}
	return 0;
}
