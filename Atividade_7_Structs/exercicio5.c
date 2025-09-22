#include <stdio.h>

struct Ponto
{
	float x;
	float y;
	float z;
};

void exibe (struct Ponto v, char o)
{
	switch (o)
	{
		case 'x':
			printf("%.0f\n", v.x);
			break;
		case 'y':
			printf("%.0f\n", v.y);
			break;
		case 'z':
			printf("%.0f\n", v.z);
			break;
		case 't':
			printf("(%.0f,%.0f,%.0f)\n", v.x, v.y, v.z);
			break;
		default:
			printf("Digite 'x', 'y' ou 'z' para as respectivas coordenadas ou 't' para todas.");
	}
}


int main (void)
{
	struct Ponto v1 = {1,0,5};
	struct Ponto v2 = {3,3,3};
	struct Ponto v3 = {0,10,0};
	
	printf("v1.y = "); exibe(v1, 'y');
	printf("v2.y = "); exibe(v2, 'y');
	printf("v3.y = "); exibe(v3, 'y');
	
	v1.z += 10;
	v2.z += 10;
	v3.z += 10;
	
	printf("Coordenadas de v2: (x,y,z) = "); exibe(v2, 't');
	
	return 0;
}

// esse código poderia ser muito mais simples e direto, sem função, switch e prints a mais que só foram necessários devido à função. Apenas quis testar meus conhecimentos e habilidades com funções e switch.
