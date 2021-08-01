//Q1 - LUCAS MIRANDA - Numero USP: 12542838

#include <stdio.h> 

float calculaN(int n);

void main(){
	
    //Define o valor de N
    int n = 10;
    float res = 0;

    //Chama a função
    res = calculaN(n);
    printf("Soma: %f", res);

}

float calculaN(int n){

    int i = 0;
    float inverso = 1, termo = 1, soma = 0;

    //Crie um termo para cada i até n
    for(i = 1; i<=n; i++){

        termo = ((2*(float)i)/(2*(float)i-1))*inverso;
        inverso = -inverso;

        printf("Termo %d: %f\n",i, termo);
        soma = soma + termo;
    }

    return soma;
}
