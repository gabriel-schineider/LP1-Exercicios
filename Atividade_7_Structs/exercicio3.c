#include <stdio.h>

struct Personagem
{
	int forca;
	int energia;
	int experiencia;
};

struct Personagem preencheB (struct Personagem* p)
{
	printf("Insira a Força: ");
	scanf("%d", &p->forca);
	
	printf("Insira a Energia: ");
	scanf("%d", &(p->energia));
	
	printf("Insira a Experiência: ");
	scanf("%d", &((*p).experiencia));
}


int main (void)
{
	struct Personagem p1;
	preencheB(&p1);
	
	struct Personagem p2;
	preencheB(&p2);
	
	printf("(%d,%d,%d) vs (%d,%d,%d)\n",
	p1.forca, p1.energia, p1.experiencia,
	p2.forca, p2.energia, p2.experiencia);

	
	return 0;
}
