#include <stdio.h>
#include <stdbool.h>


struct Anfibio
{
	int numPatas;
	float espessuraPele;
	bool cauda;
};

struct Ave
{
	float comprimentoBico;
	bool autonomiaVoo;
	float frequenciaCanto;
};

struct Mamifero
{
	int qntDentes;
	float volumeCerebro;
	float velocidadeTerrestre;
};

struct Reptil
{
	bool venenoso;
	bool autonomiaSubmerso;
	float espessuraOvo;
};


union Class
{
	struct Anfibio anfibio;
	
	struct Ave ave;
	
	struct Mamifero mamifero;
	
	struct Reptil reptil;
};


enum Sub
{
		anfibio,
		ave,
		mamifero,
		reptil
};


struct Animal
{
	enum Sub sub;
	
	union Class class;
};




int main (void)
{
	struct Animal Pinguim;
	Pinguim.sub = ave;
	Pinguim.class.ave.comprimentoBico = 7.84;
	Pinguim.class.ave.autonomiaVoo = false;
	Pinguim.class.ave.frequenciaCanto = -189.23;
	
	struct Animal Rinoceronte;
	Rinoceronte.sub = mamifero;
	Rinoceronte.class.mamifero.qntDentes = 44;
	Rinoceronte.class.mamifero.volumeCerebro = 52.01;
	Rinoceronte.class.mamifero.velocidadeTerrestre = 89.68;
	
	struct Animal Axolote;
	Axolote.sub = anfibio;
	Axolote.class.anfibio.numPatas = 4;
	Axolote.class.anfibio.espessuraPele = 3.49;
	Axolote.class.anfibio.cauda = true;
	
	struct Animal Jacare;
	Jacare.sub = reptil;
	Jacare.class.reptil.venenoso = false;
	Jacare.class.reptil.autonomiaSubmerso = true;
	Jacare.class.reptil.espessuraOvo = 1.12;
	
	struct Animal Tucano;
	Tucano.sub = ave;
	Tucano.class.ave.comprimentoBico = 14.32;
	Tucano.class.ave.autonomiaVoo = true;
	Tucano.class.ave.frequenciaCanto = 34.68;
	
	struct Animal Camelo;
	Camelo.sub = mamifero;
	Camelo.class.mamifero.qntDentes = 78;
	Camelo.class.mamifero.volumeCerebro = 42.11;
	Camelo.class.mamifero.velocidadeTerrestre = 58.12;
	
	return 0;
}
