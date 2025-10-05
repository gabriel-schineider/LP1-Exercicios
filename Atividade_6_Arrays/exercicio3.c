#include <stdio.h>

float determinante (int arr[2][2], int lc)
{
	return (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
}


int main (void)
{
	int arr[2][2] = {{1, 5}, {2, -21}};
	float det = determinante(arr, 2);
	printf("%.2f \n", det);
	
	return 0;
}
