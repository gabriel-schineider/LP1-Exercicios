#include <stdio.h>

struct Avaliacao
{
	char comida[51]; // the last 1 byte (or 8 bits) is, exclusively, for the Null Terminator '\0'
	float nota;
};

void preencheAvaliacao (struct Avaliacao * x)
{
	printf("Digite o nome da comida que deseja avaliar: ");
	scanf("%s", x->comida);
	
	printf("Digite a nota (0.0 até 10.0): ");
	scanf("%f", &x->nota);
}


int main ()
{
	struct Avaliacao um;
	preencheAvaliacao(&um);
	printf("Comida: %s \n", um.comida);
	printf("Nota: %.1f \n", um.nota);
	
	return 0;
}
