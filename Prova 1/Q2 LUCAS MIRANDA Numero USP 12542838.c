#include <stdio.h>
#include <string.h>
#include <math.h>

//LUCAS MIRANDA - Numero USP: 12542838

void main(){

//Vars
int i, n, fatorial=1, soma=0;


do{
printf("Digite um numero x: ");
fflush(stdin);
scanf("%d", &n);

//Menor que 30: fatorial
if(n<=30){

    //Reinicia a var
    fatorial = 1;

    for(i = 1; i<=n; i++){
    fatorial = fatorial*i;
    }

printf("\nFatorial: %d\n", fatorial);

}

//Maior que 30
if(n>30){

    //Reinicia a variavel
    soma = 0;

    //Soma
    for(i = -5; i<=n; i++){

        soma = soma + i;

    }

    //Print soma
    printf("\nSoma: %d\n", soma);

}



//Se e -1, pare o programa
}while(n != -1);









}