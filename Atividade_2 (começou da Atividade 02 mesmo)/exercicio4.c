// Exercício 4

# include <stdio.h>

int main (void) {
	double milha = 1.6;
	double velocidadeMi, velocidadeKm;
	
	scanf("%lf", &velocidadeMi);
	velocidadeKm = velocidadeMi / milha;
	
	if (velocidadeKm < 80) {
		printf("ACELERE \n");
	} else {
		if (velocidadeKm <= 100) {
			printf("MANTENHA \n");
		} else {
			printf("DESACELERE \n");
		}
	  }
	 return 0;
}
