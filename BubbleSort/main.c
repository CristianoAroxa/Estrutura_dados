#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int * v,int n){
        int i, fim,aux;
            for(i = n-1; fim> 0; --fim){
                for(i=0; i< fim ;++i){
                    if(v[i]>v[i+1]){
                        aux = v[i];
                        v[i] = v[i+1];
                        v[i+1] = aux;
                    }
                }
            }
}

int main(){

int v[7] = {7,5,2,1,3,4,8};
BubbleSort(v,7);

}

