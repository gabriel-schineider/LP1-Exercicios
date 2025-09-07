# include <stdio.h>

void compra (int* conta, int valorCompra)
{
	if (*conta >= valorCompra)
	{
		*conta -= valorCompra;
	}
	else
	{
		printf("Não há saldo suficiente para realizar a compra.\n");
	}
}


int main (void)
{	
	int conta1, conta2, valorCompra, saldo;
	int* pConta;
	
	printf("Insira o saldo da 1° conta: ");
	scanf("%d", &conta1);
	printf("Insira o saldo da 2° conta: ");
	scanf("%d", &conta2);
	
	if (conta1 >= conta2)
	{
		pConta = &conta1;
	}
	else
	{
		pConta = &conta2;
	}
		
	printf("Digite o valor da compra: ");
	scanf("%d", &valorCompra);
	
	compra(pConta, valorCompra);
	
	printf("Saldo da 1° conta: %d\nSaldo da 2° conta: %d\n", conta1, conta2);


	return 0;
}
