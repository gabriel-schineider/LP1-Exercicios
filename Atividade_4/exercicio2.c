# include <stdio.h>
# include <math.h>

int eh_primo(int n) //função do exercício1 sem alterá-la
{
	int primo=1;	
	for (int i=2; i<=sqrt(n); i++)
	{
		if (n%i == 0){
			primo = 0;
			break;
		}
	}
	return primo;
}

int todos_os_primos (int max)
{
	int resultado;
	for (int i=1; i<=max; i++)
	{
		resultado = eh_primo(i);
		if (resultado == 1)
		{
			printf("%d \n", i);
		}
	}
}

int main (void)
{
	int num;
	printf("Digite um número para receber todos os primos entre 1 e ele: ");
	scanf("%d", &num);
	
	todos_os_primos(num);
	
	return 0;
}
