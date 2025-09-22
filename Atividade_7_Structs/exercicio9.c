// Inclusões
#include <stdio.h>

// Estruturas
struct Posicao
{
	float x;
	float y;
};

struct Personagem
{
	int ID;
	struct Posicao posicao;
	int pontuacao;
};

// Protótipo de funções
void exibePersonagens(struct Personagem * personagens, int n);


// MAIN
#define TAM 10
int main ()
{
	struct Personagem personagens[TAM];
	int n = TAM;
	
	for (int i=0; i<10; i++)
	{
		personagens[i].pontuacao = 0;
	}
	
	exibePersonagens(personagens, n);
	
	return 0;
}


// Funções completas
void exibePersonagens(struct Personagem * personagens, int n)
{
	for (int i=0; i<n; i++)
	{
		printf("Personagem %d \n ", i);
		printf("ID: %d \n ", personagens[i].ID);
		printf("Posição (x,y) = (%.1f,%.1f) \n ", personagens[i].posicao.x, personagens[i].posicao.y);
		printf("Pontuação: %d \n", personagens[i].pontuacao);
		printf("\n");
	}
}
