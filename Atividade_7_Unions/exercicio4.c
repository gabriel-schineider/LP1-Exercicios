#include <stdio.h>

enum Sub
{
	real,
	dolar,
	euro
};

struct Preco
{
	enum Sub sub;
	union
	{
		float real;
		float dolar;
		float euro;
	};
};


// Protótipo das funções
void exibePreco (struct Preco produto);
void alteraMoeda (struct Preco* produto, enum Sub subNovo);




int main (void)
{
	struct Preco caneca;
	caneca.sub = euro;
	caneca.euro = 42.36;
	
	exibePreco(caneca);
	
	alteraMoeda(&caneca, real);
	exibePreco(caneca);
	
	alteraMoeda(&caneca, dolar);
	exibePreco(caneca);
	
	return 0;
}




// Funções completas

void exibePreco (struct Preco produto)
{
	switch (produto.sub)
	{
		case (real):
			printf("R$%.2f\n", produto.real);
			break;
		
		case (dolar):
			printf("$%.2f\n", produto.dolar);
			break;
		
		case (euro):
			printf("£%.2f\n", produto.euro);
			break;
	}
}

void alteraMoeda (struct Preco* produto, enum Sub subNovo)
{
	// não há necessidade de verificar em qual dos tipos da union houve a atribuição do preço, pois independente do tipo dentro da union que for passado para a função printf, o resultado será o mesmo. Ou seja, ainda que a atribuição tenha sido "(1) produto.real = 10.02 ; produto.sub = real;", ao alterar para "(2) produto.sub = dolar;", a exibição, na função exibeProduto criada para a ser simplesmente "(3) $10.02".
	switch (subNovo)
	{
		case (real):	
			produto->sub = real;
			break;
		
		case (dolar):
			produto->sub = dolar;
			break;
			
		case (euro):
			produto->sub = euro;
			break;
	}
}
