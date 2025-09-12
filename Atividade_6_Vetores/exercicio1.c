# include <stdio.h>

void fill (int *xs, int n) //passado por endereço para mudar o vetor real
{
	for (int i=0; i<n; i++)
	{
		int num;
		scanf("%d", &num);
		*(xs + i) = num;
	}
}

float mean (int * xs, int n)
{
	int soma=0;
		for (int i=0; i<n; i++)
	{
		soma += *(xs + i);
	}
	float mean = soma / n;

	return mean;
}

int main (void)
{
	int vec[100];	int n;
	printf("Insira uma quantidade 'qnt' para preencher o vetor (qnt <= 100): ");
	scanf("%d", &n);

	printf("Preencha os %d valores desse vetor:\n", n);
	fill(vec, n);
	float media = mean(vec, n);
	
	printf("%f \n", media);
	
	return 0;
}
