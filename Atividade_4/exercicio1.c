# include <stdio.h>

int eh_primo(int n)
{
	int primo=1;	
	for (int i=2; i<n; i++)
	{
		if (n%i == 0){
			primo = 0;
			break;
		}
	}
	return primo;
}

int main (void)
{
	int num, resultado;
	
	printf("Digite um número para saber se ele é primo: ");
	scanf("%d", &num);
	
	resultado = eh_primo(num);
	
	printf("%d \n", resultado);
		
	return 0;
}
