#include <stdio.h>
#include <stdbool.h>

// Assinatura das funções
int tamanho (char* s);
bool substring(char* s1, char* s2);


int main (void)
{
  char s1[12] = "Paradise"; // string base
  char s2[12] = "Para"; // prefixo da s1
  char s3[12] = "ad"; // meio da s1
  char s4[12] = "se"; // sufixo da s1
  char s5[12] = "Wonderful!"; // maior que s1
  char s6[12] = "Package"; // começa igual, mas é diferente da s1

  int r1 = substring(s1, s2);
  printf("%d\n", r1); // 1

  int r2 = substring(s1, s3);
  printf("%d\n", r2); // 1

  int r3 = substring(s1, s4);
  printf("%d\n", r3); // 1

  int r4 = substring(s1, s5);
  printf("%d\n", r4); // 0

  int r5 = substring(s1, s6);
  printf("%d\n", r5); // 0
  
  return 0;
}


// Funções completas
int tamanho (char* s)
{
	// retorna o tamanho da string sem considerar o \0
	
	int i=0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}

bool substring(char* s1, char* s2)
{
  int tam_s1 = tamanho(s1);
  int tam_s2 = tamanho(s2);

  if (tam_s2 > tam_s1)
  {
    return false;
  }

  for (int i = 0; i <= tam_s1 - tam_s2; i++) // Analisando apenas intervalos em que, ao iniciar da posição i na s1, ainda existem uma quantidade de elementos na s1 maior ou igual à da s2 para serem analisados em sincronia.
  {
    int j; // Declarando fora para manter o valor dessa variável após o loop mais interno
    for (j = 0; j < tam_s2; j++)
    {
      if (s2[j] != s1[i + j]) // Sincronizando a comparação das posições corretas 
      {
        break;
      }
    }
    
    if (j == tam_s2)
    {
      return true;
    }
  }
  return false;
}