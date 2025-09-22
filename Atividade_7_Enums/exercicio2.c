
// Eu já havia feito esses exercícios usando enum para tornar a union discriminada

// Abaixo estarei colocando cada um dos três exercícios requisitados nesse exercício.


// EXERCÍCIO 4
/*
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
*/



// Funções completas
/*
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
*/





// EXERCÍCIO 5
/*
#include <stdio.h>
#include <stdbool.h>


struct Anfibio
{
	int numPatas;
	float espessuraPele;
	bool cauda;
};

struct Ave
{
	float comprimentoBico;
	bool autonomiaVoo;
	float frequenciaCanto;
};

struct Mamifero
{
	int qntDentes;
	float volumeCerebro;
	float velocidadeTerrestre;
};

struct Reptil
{
	bool venenoso;
	bool autonomiaSubmerso;
	float espessuraOvo;
};


union Class
{
	struct Anfibio anfibio;
	
	struct Ave ave;
	
	struct Mamifero mamifero;
	
	struct Reptil reptil;
};


enum Sub
{
		anfibio,
		ave,
		mamifero,
		reptil
};


struct Animal
{
	enum Sub sub;
	
	union Class class;
};




int main (void)
{
	struct Animal Pinguim;
	Pinguim.sub = ave;
	Pinguim.class.ave.comprimentoBico = 7.84;
	Pinguim.class.ave.autonomiaVoo = false;
	Pinguim.class.ave.frequenciaCanto = -189.23;
	
	struct Animal Rinoceronte;
	Rinoceronte.sub = mamifero;
	Rinoceronte.class.mamifero.qntDentes = 44;
	Rinoceronte.class.mamifero.volumeCerebro = 52.01;
	Rinoceronte.class.mamifero.velocidadeTerrestre = 89.68;
	
	struct Animal Axolote;
	Axolote.sub = anfibio;
	Axolote.class.anfibio.numPatas = 4;
	Axolote.class.anfibio.espessuraPele = 3.49;
	Axolote.class.anfibio.cauda = true;
	
	struct Animal Jacare;
	Jacare.sub = reptil;
	Jacare.class.reptil.venenoso = false;
	Jacare.class.reptil.autonomiaSubmerso = true;
	Jacare.class.reptil.espessuraOvo = 1.12;
	
	struct Animal Tucano;
	Tucano.sub = ave;
	Tucano.class.ave.comprimentoBico = 14.32;
	Tucano.class.ave.autonomiaVoo = true;
	Tucano.class.ave.frequenciaCanto = 34.68;
	
	struct Animal Camelo;
	Camelo.sub = mamifero;
	Camelo.class.mamifero.qntDentes = 78;
	Camelo.class.mamifero.volumeCerebro = 42.11;
	Camelo.class.mamifero.velocidadeTerrestre = 58.12;
	
	return 0;
}
*/





// EXERCÍCIO 7
/*
#include <stdio.h>


// Criação das formas de pagamento

struct Cartao
{
	int numCartao;
	int validade;
	int CVV;
	char nomeTitular[61]; // The last byte is for the null terminator '\0'
};

struct Pix
{
	char instituicaoBancaria[61]; // The last byte is for the null terminator '\0'
	int codigoPix;
};

struct Boleto
{
	char instituicaoBancaria[61]; // The last byte is for the null terminator '\0'
	int codigoBoleto;
};

enum Sub
{
	cartao,
	pix,
	boleto
};

struct Pagamento
{
	enum Sub sub;
	
	union
	{
		struct Cartao cartao;
		struct Pix pix;
		struct Boleto boleto;
	};
};


// Criação da avaliação do cliente

struct Avaliacao
{
	char comida[51]; // the last 1 byte (or 8 bits) is, exclusively, for the Null Terminator '\0'
	float nota;
};


// Criação da função para preencher o método de pagamento

void preenchePagamento (struct Pagamento * pagamento)
{
	switch (pagamento->sub)
	{
		case (cartao):
			printf("Insira o número do Cartão: ");
			scanf("%d", &pagamento->cartao.numCartao);
			
			printf("Insira a data de validade do Cartão: ");
			scanf("%d", &pagamento->cartao.validade);
			
			printf("Insira o código de segurança (CVV) do Cartão: ");
			scanf("%d", &pagamento->cartao.CVV);
			
			printf("Insira o nome do titular do Cartão: ");
			scanf("%s", pagamento->cartao.nomeTitular);
		
			break;
			
		case (pix):
			printf("Insira o nome da instituição bancária: ");
			scanf("%s", pagamento->pix.instituicaoBancaria);
			
			printf("Insira o código PIX: ");
			scanf("%d", &pagamento->pix.codigoPix);
			
			break;
			
		case (boleto):
			printf("Insira o nome da instituição bancária: ");
			scanf("%s", pagamento->boleto.instituicaoBancaria);
			
			printf("Insira o código do boleto: ");
			scanf("%d", &pagamento->boleto.codigoBoleto);
			
			break;
	}
}


// Criação da função para preencher a avaliação do cliente

void preencheAvaliacao (struct Avaliacao * x)
{
	printf("Digite o nome da comida que deseja avaliar: ");
	scanf("%s", x->comida);
	
	printf("Digite a nota (0.0 até 10.0): ");
	scanf("%f", &x->nota);
}



// MAIN
int main (void)
{
	// EXPERIÊNCIA DO CLIENTE NO RESTAURANTE XXX
	// Cliente chegou no restaurante, aproveitou o ambiente, fez sua refeição, bateu papo e finalmente pediu para fechar a conta. Assim, chegou nos momentos finais de pagamento e avaliação.

	printf("Foi um prazer receber vossa pessoa neste restaurante!\n\nO valor total ficou em R$XX,XX. Selecione a forma de pagamento digitando:\n '0' para Cartão, '1' para Pix ou '2' para Boleto: "); // TUDO BEM QUE BOLETO NÃO FAZ MUITO SENTIDO NESSE CASO, MAS É APENAS PARA QUESTÕES DIDÁTICAS......
	struct Pagamento pagamento;
	scanf("%d", (int*)&pagamento.sub);
	
	printf("\nPreencha as informações de pagamento: \n");
	preenchePagamento(&pagamento);
	
	printf("\nMaravilha! Agora avalie um dos pratos que você consumiu hoje.\n");
	struct Avaliacao avaliacao;
	preencheAvaliacao(&avaliacao);
	
	printf("\nAgradecemos a vossa presença! Voltem sempre!\n");
	
	return 0;
}
*/
