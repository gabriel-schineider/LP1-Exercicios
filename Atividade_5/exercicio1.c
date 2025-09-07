# include <stdio.h>

int main (void)
{
	int a,b;
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("e o valor de b: ");
	scanf("%d", &b);
	
	printf("Valores de a=%d e de b=%d \n", a,b);
	
	int* p;
	
	if (a >= b)
	{
		p = &a;
		*p = a - 50;
	}
	else
	{
		p = &b;
		*p = b - 50;
	}
	
	printf("Novos valores de a=%d e de b=%d \n", a,b);

	return 0;
}
