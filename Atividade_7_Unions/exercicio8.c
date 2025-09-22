#include <stdio.h>
#include <stdbool.h>
#include <string.h>
// The las byte is for the null terminator '\0'

struct Anfibio
{
	char nomeEspecie[91];
	char corPredominante[41];
	int numPatas;
	float espessuraPele;
	bool cauda;
};

struct Ave
{
	char nomeEspecie[91];
	char corPredominante[41];
	float comprimentoBico;
	bool autonomiaVoo;
	float frequenciaCanto;
};

struct Mamifero
{
	char nomeEspecie[91];
	char corPredominante[41];
	int qntDentes;
	float volumeCerebro;
	float velocidadeTerrestre;
};

struct Reptil
{
	char nomeEspecie[91];
	char corPredominante[41];
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
	strcpy(Pinguim.class.ave.nomeEspecie, "Pinguinzão");
	strcpy(Pinguim.class.ave.corPredominante, "Preto");
	Pinguim.class.ave.comprimentoBico = 7.84;
	Pinguim.class.ave.autonomiaVoo = false;
	Pinguim.class.ave.frequenciaCanto = -189.23;
	
	struct Animal Rinoceronte;
	Rinoceronte.sub = mamifero;
	strcpy(Rinoceronte.class.mamifero.nomeEspecie, "Rinocerontão");
	strcpy(Rinoceronte.class.mamifero.corPredominante, "Cinza");	
	Rinoceronte.class.mamifero.qntDentes = 44;
	Rinoceronte.class.mamifero.volumeCerebro = 52.01;
	Rinoceronte.class.mamifero.velocidadeTerrestre = 89.68;
	
	struct Animal Axolote;
	Axolote.sub = anfibio;
	strcpy(Axolote.class.anfibio.nomeEspecie, "Salamatra");
	strcpy(Axolote.class.anfibio.corPredominante, "Vermelho brilhante grenar");
	Axolote.class.anfibio.numPatas = 4;
	Axolote.class.anfibio.espessuraPele = 3.49;
	Axolote.class.anfibio.cauda = true;
	
	struct Animal Jacare;
	Jacare.sub = reptil;
	strcpy(Jacare.class.reptil.nomeEspecie, "Jacaroso");
	strcpy(Jacare.class.reptil.corPredominante, "Verde");
	Jacare.class.reptil.venenoso = false;
	Jacare.class.reptil.autonomiaSubmerso = true;
	Jacare.class.reptil.espessuraOvo = 1.12;
	
	struct Animal Tucano;
	Tucano.sub = ave;
	strcpy(Tucano.class.ave.nomeEspecie, "Tucson");
	strcpy(Tucano.class.ave.corPredominante, "Preto");
	Tucano.class.ave.comprimentoBico = 14.32;
	Tucano.class.ave.autonomiaVoo = true;
	Tucano.class.ave.frequenciaCanto = 34.68;
	
	struct Animal Camelo;
	Camelo.sub = mamifero;
	strcpy(Camelo.class.mamifero.nomeEspecie, "Caramelo");
	strcpy(Camelo.class.mamifero.corPredominante, "Amarelo areia");
	Camelo.class.mamifero.qntDentes = 78;
	Camelo.class.mamifero.volumeCerebro = 42.11;
	Camelo.class.mamifero.velocidadeTerrestre = 58.12;
	
	return 0;
}
