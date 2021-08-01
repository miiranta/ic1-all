#include <stdio.h>
#include <string.h>
#include <math.h>

//LUCAS MIRANDA - Numero USP: 12542838

void main(){

//Vars
int x=0, fatorial=1, i=1;
float fator=0, resposta=0, power=0;

//Pede input
printf("Digite um numero x maior que 2: ");
scanf("%d", &x);
printf("i: %d x: %d", i, x);

//Para cada x a aprtir de 2:
for(i = 2; i<=x; i++){

    //Calcula fatorial
    fatorial = fatorial*i;

    //Calcula potencia
    power = 0;
    power = (float)pow(x, i);

    //Somando
    fator = fator + power/(float)fatorial;

    //Print calculos
    printf("\nx:%d power:%f fatorial:%d fator:%f", i ,power, fatorial, fator);

}

//Adicionando os primeiros termos e print da resposta
resposta = 1 + (float)x + fator;
printf("\n\n Resposta: %f", resposta);



}