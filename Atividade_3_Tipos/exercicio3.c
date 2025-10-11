#include <stdio.h>

int main (void)
{
	short int i, qntVetor = 50, temps[qntVetor], soma = 0, qntAcimaMedia = 0;
	float media;
	
	printf("Catalogue %hd temperaturas.\n", qntVetor);
	for (i=0; i < qntVetor; i++)
	{
		printf("Temperatura %hd: ", i+1);
		scanf("%hd", &temps[i]);
		soma = soma + temps[i];
	}
	media = soma / qntVetor;
	
	for (i=0; i < qntVetor; i++)
	{
		if (temps[i] > media)
		{
			qntAcimaMedia++;
		}
	}
	
	printf("Quantidade de temperaturas acima da média: %hd \n", qntAcimaMedia);
	
	return 0;
}
