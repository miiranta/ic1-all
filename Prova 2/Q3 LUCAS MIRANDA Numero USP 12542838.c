//Q3 - LUCAS MIRANDA - Numero USP: 12542838

#include <stdio.h> 

int vetoresIguais(int *vetor1, int *vetor2, int tamanho);

void main(){

    int tamanho = 500;
    int i = 0, vetor1[tamanho], vetor2[tamanho], res = 0;
	
    //Criando o VETOR 1 até 500
    for(i = 0; i<500; i++){
        vetor1[i] = i;
    }

    //Criando o VETOR 2 até 500
    for(i = 0; i<500; i++){
        vetor2[i] = i;
    }

    //Chama a função e print do return
    res = vetoresIguais(vetor1, vetor2, tamanho);
    printf("%d", res);

}

int vetoresIguais(int *vetor1, int *vetor2, int tamanho){

    int i = 0, diferente = 0;

    //Testando cada objeto na mesma posição
    for(i = 0; i<tamanho; i++){
        if(vetor1[i] != vetor2[i]){
            diferente = 1;
        }
    }

    //Se estiver diferente, retorne 0
    if(diferente == 0){
        return 1;
    }
    return 0;

}