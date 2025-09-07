# include <stdio.h>

void troca (int* x, int* y)
{
	int tmp;
	
	tmp = *x;
	*x = *y;
	*y = tmp;	
}


int main (void)
{
	int x=10 ,y=20;
	int* p1=&x;
	int* p2=&y;
	
	troca(p1, p2);
	
	printf("%d %d \n", x, y);
	
	return 0;
}
