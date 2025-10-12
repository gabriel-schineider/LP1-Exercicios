#include <stdio.h>

int tamanho (char* string)
{
	int i=0;
	char caracter = *string;
	while (caracter != '\0')
	{
		i++;
		caracter = *(string + i);
	}
	return i;
}


int main (void)
{
	char string[] = "Obrigado!";
	int qnt = tamanho(string);
	printf("%d \n", qnt);
	
	return 0;
}
