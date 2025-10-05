#include <stdio.h>

// Prototótipo das funções
void preencheArray(int array[2][4], int l, int c);
void exibeArray(int array[2][4]);

int main (void)
{
	int vec[2][4];
	int l=2; int c=4;
	preencheArray(vec, l, c);
	exibeArray(vec);
	
	return 0;
}


// Funções completas
void preencheArray(int array[2][4], int l, int c)
{
	for (int i=0; i<l; i++)
	{
		for (int j=0; j<c; j++)
		{
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &array[i][j]);
		}
	}
}

void exibeArray(int array[2][4])
{
{
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<4; j++)
		{
			printf("%d ", array[i][j]);
		}
		puts("");
	}
}
}
