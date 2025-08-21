// Exercício 7

# include <stdio.h>

int main (void) {
    short int i = 0, id = 0, v = 0, e = 0, d = 0, pnts = 0, pntsMaior = 0, pntsMenor = 1000, idMenor = 0, idMaior = 0;
    
    
    for (i = 0; i < 3; i++) {
    	printf("Digite o ID do time: ");
    	scanf("%hd", &id);
    	
    	printf("Digite o número de vitórias do time com ID-%hd: ", id);
    	scanf("%hd", &v);
    	
    	printf("Digite o o número de empates do time com ID-%hd: ", id);
    	scanf("%hd", &e);
    	
    	printf("Digite o o número de derrotas do time com ID-%hd: ", id);
    	scanf("%hd", &d);
    	
    	pnts = (v*3) + e;
    	
    	if (pnts > pntsMaior){
    	    pntsMaior = pnts;
    	    idMaior = id;
    	}
    	
    	if (pnts < pntsMenor){
    	    pntsMenor = pnts;
    	    idMenor = id;
    	}   	
    }
        	
    printf("Time com mais pontos: %hd \nTime com menos pontos: %hd \n", pntsMaior, pntsMenor); 
    
    return 0;
}
