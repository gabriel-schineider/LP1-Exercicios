#include <stdio.h>

void fill (int l, int c, int array[l][c])
{
	for (int i=0; i<l; i++)
	{
		for (int j=0; j<c; j++)
		{
			printf("Preencha o elemento [%d][%d] da Matriz: ", i,j);
			scanf("%d", &array[i][j]);
		}
	}
}

float mean (int l, int c, int array[l][c])
{
	int soma=0;
	for (int i=0; i<l; i++)
	{
		for (int j=0; j<c; j++)
		{
			soma += array[i][j];
		}
	}
	return soma / (l*c);
}


int main (void)
{
	int l=2; int c=3;
	int array[l][c];
	fill(l, c, array);
	
	printf("\nMatriz: \n");
	for (int i=0; i<l; i++)
	{
		printf("|");
		for (int j=0; j<c; j++)
		{
			printf(" %d ", array[i][j]);
		}
		printf("| \n");
	}
	
	float media = mean(l, c, array);
	printf("\nO valor médio dos números da matriz é: %.2f \n", media);
	
	return 0;
}
