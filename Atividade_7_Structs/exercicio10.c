// Inclusões
#include <stdio.h>

// Estruturas
struct Posicao
{
	int x;
	int y;
};

struct Personagem
{
	int ID;
	struct Posicao posicao;
	int pontuacao;
};

// Protótipos das funções
void posicaoPersonagem (struct Personagem* personagens);
void lerPersonagem (struct Personagem* personagens);
void exibePersonagens(struct Personagem * personagens, int n);
void init_mapa (char mapa[11][11]);
void scan_mapa (char mapa[11][11], struct Personagem * personagens, int n);
void print_mapa (char mapa[11][11]);



// MAIN
int main (void)
{
	struct Personagem personagens[10];	
	int n =10;
	
	for (int i=0; i<n; i++)
	{
		lerPersonagem(&personagens[i]);
	}
	
	char mapa[11][11];
	init_mapa(mapa);
	scan_mapa(mapa, personagens, n);
	print_mapa(mapa);
	
	return 0;
}



// Funções completas

void posicaoPersonagem (struct Personagem* personagem)
{
	printf("Informe a coordenada x do Personagem:\n");
	scanf("%d", &personagem->posicao.x);
	
	printf("Informe a coordenada y do Personagem:\n");
	scanf("%d", &personagem->posicao.y);
}

void lerPersonagem (struct Personagem* personagem)
{
	printf("Informe o ID do Personagem:\n");
	scanf("%d", &personagem->ID);
	
	posicaoPersonagem(personagem);
	
	printf("Informe a pontuação do Personagem:\n");
	scanf("%d", &personagem->pontuacao);	
}

void exibePersonagens(struct Personagem * personagens, int n)
{
	for (int i=0; i<n; i++)
	{
		printf("Personagem %d \n ", i);
		printf("ID: %d \n ", personagens[i].ID);
		printf("Posição (x,y) = (%d,%d) \n ", personagens[i].posicao.x, personagens[i].posicao.y);
		printf("Pontuação: %d \n", personagens[i].pontuacao);
		printf("\n");
	}
}

void init_mapa (char mapa[11][11])
{
	mapa[0][0] = ' ';
	
	for (int j=1; j<11; j++)
	{
		mapa[0][j] = '0' + j-1;
	}
	for (int i=1; i<11; i++)
	{
		mapa[i][0] = '0' + i-1;
	}
	for (int k=1; k<11; k++)
	{
		for (int l=1; l<11; l++)
		{
			mapa[k][l] = ' ';
		}
	}
}

void scan_mapa (char mapa[11][11], struct Personagem * personagens, int n)
{
	for (int c=0; c<n; c++)
	{
		int i = personagens[c].posicao.x;
		int j = personagens[c].posicao.y;
		mapa[i][j] = '0' + personagens[c].ID;
	}
}

void print_mapa (char mapa[11][11])
{
	for (int i=0; i<11; i++)
	{
		for (int j=0; j<11; j++)
		{
			printf("%c", mapa[i][j]);
		}
		printf("\n");
	}
}
