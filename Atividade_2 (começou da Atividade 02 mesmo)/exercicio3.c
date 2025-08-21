// Exercício 3

# include <stdio.h>

void main (void) {
	double dolar = 3.17;
	double preco;
	
	printf("Informe o preço do celular: ");
	scanf("%le", &preco);
	
	if (dolar * preco <= 1000) {/* não coloquei 1000 como tipo double devido à característica de promoção que a Linguagem C apresenta. */
		printf("BOM NEGÓCIO \n");
	}
}
