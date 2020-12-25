#include <bits/stdc++.h>
using namespace std;

typedef struct{

	char lingua[30];
	char traducao[30];

} etiqueta;

unsigned short procuraTraducao(etiqueta *, char *, unsigned short tam);

int main(){
	
	unsigned short qtsTraducoes, qtsCriancas;
	char idioma[30], crianca[30];
	unsigned short i;
	
	scanf("%hu", &qtsTraducoes);

	etiqueta etiquetas[qtsTraducoes];

	for (i = 0; i < qtsTraducoes; i++)
	{
		scanf(" %s", etiquetas[i].lingua);
		scanf(" %[^\n]", etiquetas[i].traducao);
	}

	scanf("%hu", &qtsCriancas);

	for (i = 0; i < qtsCriancas; i++)
	{

		scanf(" %[^\n]", crianca);
		scanf(" %s", idioma);
		printf("%s\n%s\n\n", crianca, etiquetas[procuraTraducao(etiquetas, idioma, qtsTraducoes)].traducao);
		
	}
	
}
unsigned short procuraTraducao(etiqueta *etiquetas, char *idioma, unsigned short tam)
{

	unsigned short i;

	for (i = 0; i < tam; i++)
		if (strcmp(etiquetas[i].lingua, idioma) == 0)
			return i;

}
