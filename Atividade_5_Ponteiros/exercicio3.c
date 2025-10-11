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
	
	int compras[] = { 100, 50, 80, 30, 20 };
	
	for (int i=0; i<5; i++)
	{
		if (conta1 >= conta2)
		{
			pConta = &conta1;
		}
		else
		{
			pConta = &conta2;
		}
		
		compra(pConta, compras[i]);
	
		printf("Saldo da 1° conta: %d\nSaldo da 2° conta: %d\n\n", conta1, conta2);
	}

	return 0;
}
