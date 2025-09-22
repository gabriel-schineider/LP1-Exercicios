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
