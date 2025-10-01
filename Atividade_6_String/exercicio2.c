#include <stdio.h>

int tamanho (char* string)
{
	// retorna o tamanho da string sem considerar o \0
	
	int i=0;
	while (string[i] != '\0')
	{
		i++;
	}
	return i;
}


void concatena (char* d, char* o1, char* o2)
{
	int qnt_o1 = tamanho(o1);
	int qnt_o2 = tamanho(o2);
	
	for (int i=0; i < qnt_o1; i++)
	{
		d[i] = o1[i];
	}
	for (int i=0; i <= qnt_o2; i++) // já add o '\0' no final
	{
		d[qnt_o1+i] = o2[i];
	}
}

int main (void)
{
	char str_origem1[] = "Hello,";
	char str_origem2[] = " baby!";
	int qnt_str_origem1 = tamanho(str_origem1);
	int qnt_str_origem2 = tamanho(str_origem2);
	char str_destino[qnt_str_origem1 + qnt_str_origem2 + 1]; // +1 do '\0'
	concatena(str_destino, str_origem1, str_origem2);
		
	printf("%s \n", str_destino); // conferindo a concatenação
	printf("%d \n", tamanho(str_destino)); // conferindo o tamanho
	
	return 0;
}
