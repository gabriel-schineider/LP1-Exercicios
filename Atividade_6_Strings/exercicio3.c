#include <stdio.h>

// Assinatura das funções
int palavras(char* s);



int main (void)
{
  char string[101] = "Essa é uma string com 8 palavras !"; 
  int qnt = palavras(string);
  printf("%d\n", qnt); // 8
  
  char* string2 = "A vida é bela !"; 
  int qnt2 = palavras(string2);
  printf("%d\n", qnt2); // 5

  int qnt3 = palavras("*_* ou XD ?");
  printf("%d\n", qnt3); // 4

  return 0;
}



// Funções completas
int palavras(char* s)
{
  // Considera-se que as palavras somente são separadas por espaços
  // Funciona também com strings literais, pois a função apenas lê a string, não tenta modificá-la. Se tetasse modificá-la, aí sim daria um erro de comportamento indefinido

  int i = 0;
  int c;
  if (s[0] != '\0')
  {
    c = 1; // Se o primeiro bit não está vazio, podemos garantir que já há uma palavra
  }
  else
  {
    return 0;
  }
  while (s[i] != '\0')
  {
    if (s[i] == ' ')
    {
      c++;
    }
    i++;
  }
  return c;
}