#include<stdio.h>
#include<math.h>

float det (int n, double matriz[n][n])
{
	// assume-se n >= 1
	// retorna determinante das sub-matrizes cujo cofator correspondente encontra-se na posição [l][c]

	if (n == 1)
	{
		return matriz[0][0];
	}
	if (n == 2)
	{
		return matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0];
	}
	if (n >= 3)
	{
		float soma = 0.0; // Para somar os (cofatorX * sub-matrizX) n vezes
		short int sinal; // Para alternar o sinal dos cofatores na soma deles
	// Criando uma sub-matriz para cada cofator que desconsidera a primeira linha (sub_matriz[0][j]) e também a coluna j que é relativa ao cofator da matriz passada
		for (int coluna_cofator = 0; coluna_cofator < n ; coluna_cofator++) // linha (já ignorando a primeira linha da matriz passada)
		{
			double sub_matriz[n-1][n-1];
			// i e j são índices para as linhas e colunas da matrize passada 
			int sub_i = 0;
			for (int i = 1; i < n; i++) // já desconsida a primeira linha da matriz passada
			{
				int sub_j = 0;
				for (int j = 0; j < n; j++)
				{
					if (j == coluna_cofator) // se a coluna da matriz passada for igual a coluna do cofator: pula ela; senão: atribuir o elemento da matriz principal para a sub-matriz
					{
						continue;
					}
					sub_matriz[sub_i][sub_j] = matriz[i][j];
					sub_j++;
				}
				sub_i++;
			}
	// Somando os cofatores dessa sub-matriz
		sinal = ( ((coluna_cofator % 2) == 0) ? 1 : -1 );
		soma += sinal * matriz[0][coluna_cofator] * det(n-1, sub_matriz);
		}

	// Retornando essa soma
		return soma;
	}
}

int main (void)
{
	double teste1[1][1] = {26};
	double t1 = det(1, teste1);
	printf("%.2f \n", t1);
	
	double teste2[2][2] = {{1, 5}, {1, 4}};
	double t2 = det(2, teste2);
	printf("%.2f \n", t2);
		
	double teste3[4][4] = {{2, 0, 0, 0}, {0, -3, 0, 0}, {0, 0, 31, 0}, {0, 0, 0, -2.0/31}};	
	double t3 = det(4, teste3);
	printf("%.2f \n", t3);
	
	return 0;
}