#include <stdio.h>

int main (void)
{
	//criando o vetor e lendo seus valores...
	int vet[5];
	printf("Insira os valores de \n");
	for (int i=0; i<5; i++)
	{
		printf("vet[%d]: ", i);
		scanf("%d", &vet[i]);
	}
	
	// mostrando os valores inicialmente lidos do vetor
	printf("|");
		for (int i=0; i<5; i++)
	{
		printf(" %d |", *(vet + i));
	}
	printf("\n");
	
	// removendo determinador valor e arredando os outros valores
	int i_rm;
	printf("Insira a posição do número que dejesa remover: ");
	scanf("%d", &i_rm);
	for (int i=i_rm; i<4; i++)
	{
		*(vet+i) = *(vet + i+1);
	}
	vet[4] = 0;
	
	// mostrando os valores do novo vetor em suas novas posições
	printf("|");
		for (int i=0; i<5; i++)
	{
		printf(" %d |", *(vet + i));
	}
	printf("\n");
	
	return 0;
}
