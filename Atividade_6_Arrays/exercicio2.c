#include <stdio.h>

// Assinatura das funções
void preencheArray (int array[3][2], int l, int c);
float mediaArray (int array[3][2], int l, int c);

int main (void)
{
	int arr[3][2];
	int l = 3; int c = 2;
	preencheArray(arr, l, c);
	float media = mediaArray(arr, l, c);
	printf("%.2f \n", media);
	
	return 0;
}



// Funções completas

void preencheArray (int array[3][2], int l, int c)
{
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("Digite o valor da posição [%d][%d] do Array: ", i, j);
			scanf("%d", &array[i][j]);
		}
	}
}

float mediaArray (int array[3][2], int l, int c)
{
	float soma = 0.0; // Colocando como float para que a futura divisão ocorra corretamente ao invés de truncar como numa divisão de int.
	for (int i = 0; i < l; i++)
	{
		for (int j =0; j < c; j++)
		{
			soma += array[i][j];
		}
	}
	return soma / (l*c); 
}
