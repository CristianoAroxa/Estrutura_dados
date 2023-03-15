#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m[4][5],l,c,p = 0;
   printf("****** Exercicio Matriz ******\n");
        for(l = 0;l < 4; l++){
            for(c = 0;c < 5; c++){
                printf("\n Digite um valor: ");
                scanf("%d",&m[l][c]);
                if(m[l][c]%2==0){
                    p++;
                }
        }
        printf("\n A quantidade de numeros pares e: %d\n", p);

    }

    }



