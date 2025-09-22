#include <stdio.h>

struct Atleta
{
	char nome[101]; // the last 1 byte (or 8 bits) is for the Null Terminator '\0'
	short int idade;
	float altura;
};

void exibeAtleta (struct Atleta atleta)
{
	printf("Informações do atleta: \n ");
	printf("Nome: %s\n ", atleta.nome);
	printf("Idade: %d\n ", atleta.idade);
	printf("Altura: %.2f\n", atleta.altura);
}


int main ()
{
	struct Atleta a1 = {"Ronaldinho Gaúcho", 32, 1.69};
	struct Atleta a2 = {"Gabriel Medina", 45, 1.83};
	struct Atleta a3 = {"Kobe Bryant", 28, 2.12};
	
	exibeAtleta(a1);
	exibeAtleta(a2);
	exibeAtleta(a3);
	
	return 0;
}
