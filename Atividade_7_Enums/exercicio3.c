#include <stdio.h>

enum Boolean
{
	false,
	true
};

int main (void)
{
	int a = false;
	printf("a: Inteiro; a <- false // %d \n", a);
	
	int b = true;
	printf("b: Inteiro; b <- true // %d \n", b);
	
	enum Boolean x = false;
	printf("x: enum Boolean; x <- false // %d \n", x);
	
	enum Boolean y = true;
	printf("y: enum Boolean; y <- true // %d \n", y);
	
	return 0;
}
