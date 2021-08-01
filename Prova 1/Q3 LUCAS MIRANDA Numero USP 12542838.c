#include <stdio.h>
#include <string.h>
#include <math.h>

void main(){

    //ints
    float a=1, b=1, c=1;
    float delta = 0;
    float resposta = 0;

    //Pede input a
    printf("Digite um numero a: ");
    scanf("%f", &a);

    //Pede input b
    printf("Digite um numero b: ");
    scanf("%f", &b);

    //Pede input cc
    printf("Digite um numero c: ");
    scanf("%f", &c);

    printf("\na:%f b:%f c:%f\n", a,b,c);

    //Calcula delta
    delta = (float)pow(b,2)-4*a*c;
    printf("Delta: %f\n", delta);

    //Se Delta MAIOR que 0
    if(delta > 0){
        //x1 (Delta positivo)
        resposta = ((-b) + sqrt(delta)) / (2*a);
        printf("Ha 2 raizes! X1: %f", resposta);

        //x2 (Delta negativo)
        resposta = ((-b) - sqrt(delta)) / (2*a);
        printf(" X2: %f", resposta);


    }

    //Se Delta = 0
    if(delta == 0){
        resposta = (-(float)b)/(2*(float)a);
        printf("Ha apenas uma raiz! X1: %f", resposta);

    }

    //Se delta MENOR que 0
    if(delta < 0){
    printf("Nao ha raizes reais!");
    }



}