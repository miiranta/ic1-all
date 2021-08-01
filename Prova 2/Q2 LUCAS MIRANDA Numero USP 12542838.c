//Q2 - LUCAS MIRANDA - Numero USP: 12542838

#include <stdio.h> 

int usaVetor(int *vetor);

void main(){

    int i = 0, vetor[1000];

    //Criando vetor de 1000 valores, de 0 a 999
    for(i = 0; i<1000; i++){
        vetor[i] = i;
    }

    //Chamando a função, passando o vetor
    usaVetor(vetor);

}

int usaVetor(int *vetor){

    int i = 0, buffer = 0, soma = 0;

    //Invertendo pares com impares, pulando 2
    for(i = 0; i<1000; i = i + 2){
        buffer = vetor[i+1];
        vetor[i+1] = vetor[i];
        vetor[i] = buffer;
    }

    //Print vetor e calcula a soma
    printf("Vetor:\n", vetor[i]);
    for(i = 0; i<1000; i++){
        printf(" %d", vetor[i]);
        soma = soma + vetor[i];
    }

    //Print Soma
    printf("\nSoma:\n %d", soma);

}