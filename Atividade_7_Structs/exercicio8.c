#include <stdio.h>
#include <math.h>

struct Ponto
{
	float x;
	float y;
};

// Protótipos das funções para melhor legibilidade do código:
struct Ponto preenchePonto (struct Ponto p);
void preencheVetorPontos (struct Ponto *pts, int n);
int maiorDist (struct Ponto *pts, int n);


#define TAM 10 // tamanho do vetor de pontos

int main (void)
{
	struct Ponto pts[TAM];
	int n = TAM;
	preencheVetorPontos(pts, n);
	
	
	printf("Resultado: \n");
	for (int i=0; i<n; i++)
	{
		printf("Ponto pts[%d] = (%.1f,%.1f) \n", i, pts[i].x, pts[i].y);
	}
	
	int i = maiorDist(pts, n);
	printf("\nO ponto mais distante é o pts[%d] = (%.1f,%.1f) \n", i, pts[i].x, pts[i].y);
	
	return 0;
}


// Funções completas:
struct Ponto preenchePonto (struct Ponto p)
{
	printf("Insira a coordenada x: ");
	scanf("%f", &p.x);
	
	printf("Insira a coordenada y: ");
	scanf("%f", &(p.y));
	
	return p;
}

void preencheVetorPontos (struct Ponto *pts, int n)
{
	for (int i=0; i<10; i++)
	{
		printf("Insira a coordenada x do ponto pts[%d]: ", i);
		scanf("%f", &pts[i].x);
		
		printf("Insira a coordenada y do ponto pts[%d]: ", i);
		scanf("%f", &pts[i].y);
		printf("\n");
	}
}

int maiorDist (struct Ponto *pts, int n)
{
	struct Ponto maior = {0,0};
	int id;
	for (int i=0; i<n; i++)
	{
		if (sqrt(pow(pts[i].x, 2) + pow(pts[i].y, 2)) > sqrt(pow(maior.x, 2) + pow(maior.y, 2))) // comparando a distância do ponto 'maior' com a do ponto pts[i] -levando em consideração à origem (0,0)-
		{
			id = i;
			maior.x = pts[i].x;
			maior.y = pts[i].y;
		}
	}
	return id;
}
