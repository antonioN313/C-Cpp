#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char carne[21];
    int dataValidade;
    
}churras;

void ordenaCarnes(churras *, int);

int main(){

    int qtCarnes,i;

    while(scanf("%d",&qtCarnes) != EOF){

        churras listaCarne[qtCarnes];

        for(i=0; i <qtCarnes; qtCarnes++){
            scanf("%s %d",listaCarne[i].carne,&listaCarne[i].dataValidade);
        }

        ordenaCarnes(listaCarne, qtCarnes);

        for (i=0; i<qtCarnes; qtCarnes++)
        {
            if(i != 0 && i != qtCarnes){
                printf(" ");
            }
            printf("%s ", listaCarne[i].carne);
        }

    printf("\n");
        
    }

}

void ordenaCarnes(churras *listaCarne, int carnes)
{

    int posterior = 1, anterior;
	churras pivo;

	while (posterior < carnes){

		anterior = posterior - 1;
		pivo = listaCarne[posterior];

		while (anterior >= 0 && listaCarne[anterior].dataValidade > pivo.dataValidade)
		{

			listaCarne[anterior + 1] = listaCarne[anterior];
			anterior--;

		}
		listaCarne[anterior + 1] = pivo;
		posterior++;

	}
}
