#include <stdio.h>

union Ponto
{
	struct
	{
		int x;
		int y;
		int z;
	};
	
	int vec[3];
};


int main (void)
{
	union Ponto pt;
	
	pt.vec[0] = 10;
	pt.vec[1] = 20;
	pt.vec[2] = 30;
	
	printf("pt1: (%d,%d,%d)\n", pt.x, pt.y, pt.z);
	

	union Ponto pt2;
	
	pt2.x = 40;
	pt2.y = 50;
	pt2.z = 60;
	
	printf("pt2: (%d,%d,%d)\n", pt2.vec[0], pt2.vec[1], pt2.vec[2]);
	
	return 0;
}
