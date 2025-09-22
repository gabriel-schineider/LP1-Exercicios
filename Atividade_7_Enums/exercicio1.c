#include <stdio.h>

enum Dia
{
	seg,
	ter,
	qua,
	qui,
	sex,
	sab,
	dom
};

char* nome (enum Dia d)
{
	switch (d)
	{
		case (seg):
			return "Segunda";
		
		case (ter):
			return "Terça";
		
		case (qua):
			return "Quarta";
		
		case (qui):
			return "Quinta";
		
		case (sex):
			return "Sexta";
		
		case (sab):
			return "Sábado";
		
		case (dom):
			return "Domingo";
	}
}


int main (void)
{
	printf("%s \n", nome(seg));
	printf("%s \n", nome(ter));
	printf("%s \n", nome(qua));
	printf("%s \n", nome(qui));
	printf("%s \n", nome(sex));
	printf("%s \n", nome(sab));
	printf("%s \n", nome(dom));
	
	return 0;
}
