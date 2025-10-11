// Exercício 6

# include <stdio.h>

void main (void) {
	int i = 0;
	int soma = 0;
	int num = 0;
	int ordem1 = 1;

	printf("Digite um número n para obter o somatório de i², com i indo de 0 até n: ");
	scanf("%d", &num);
	
	printf("Digite '0' para receber o resultado em O(n) e '1' para recebê-lo em O(1): ");
	scanf("%d", &ordem1);
	
// Fiz com essas duas possibilidades pois acredito que o intuito dessse exercício era treinar o loop for, mas como também estou aprendendo Algoritmos e Estruturas de Dados I, achei que seria uma boa ideia praticar formas mais otimizadas de estruturar um código.
	
	if (ordem1 == 0) {
		for (i=1; i<=num; i++) {
		soma = soma + i * i;
		}
	} else {
		soma = (num * (num + 1) * (2*num + 1)) / 6 ;
	}
	
	printf("Resultado: %d \n", soma);	
}
