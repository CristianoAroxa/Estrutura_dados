#include <stdio.h>
#include <stdlib.h>

int main(){

    /*p1[5]: vetor que armazena a nota p1 de 5 alunos
      p2[5]: vetor que armazena a nota p2 de 5 alunos
      media[5]: vetor que armazena a m�dia de 5 alunos*/
	double p1[5],p2[5],media[5],maior,menor;
	int i;


	// for � la�o de repeti��o- i = 0 (inicio do la�o), i < 5(posi��o final do la�o), i ++ (raz�o do la�o)
    for(i=0;i<5; i ++ ){
	printf("\n Digite p1: ");
	scanf("%lf",&p1[i]);
	printf("\n Digite p2: ");
	scanf("%lf",&p2[i]);

	media[i] = (p1[i] + p2[i])/2.0;
	printf(" A media e: %lf ", media[i]);

    }
    for(i=0;i<5;i++){
    if(menor>media[i])
        menor = media[i];
    if(maior<media[i])
        maior = media[i];
    menor = 10;
	maior = 0;
    }
    return 0; // significa que o programa foi executado corretamente

}
