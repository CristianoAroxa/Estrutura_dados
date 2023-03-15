#include <stdio.h>
#include <stdlib.h>
/* Crie um programa em C que permita armazenar
em uma matriz[3][5] as notas de alunos. o programa
deverá analizar a situação decada aluno da seguinte forma:
- nota > 6 : APROVADO
- nota >2<6: EXAME
- nota <2 : REPROVADO
*/
int main()
{
   int m[3][5],l,c,n = 0 ,exam =0, aprov=0, reprov=0;
   printf("****** Exercicio Matriz 02 ******\n");
        for(l = 0;l < 3; l++){
            for(c = 0;c < 5; c++){
                printf("\n Digite a nota do aluno: ");
                scanf("%d",&n);

                if(n >= 6 && n <= 10){
                    printf("APROVADO");
                }else if(n >= 2 && n < 6){
                    printf("EXAME");
                }else if(n >= 0 && n < 2){
                    printf("REPROVADO");
                }else{
                    printf("DIGITE UMA NOTA VÁLIDA.");
                }




            }
        }




}


