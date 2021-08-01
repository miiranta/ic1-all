#include <stdio.h>
#include <string.h>

//LUCAS MIRANDA - Numero USP: 12542838

void main(){

//vars
int n = 3; //nXn
int i, j;
float matrix[100][100]; 

    printf("Insira os elementos da matriz (tipo float):\n");

    //Pega elementos
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){

        printf("i:%d j:%d = ",i ,j ) ;  
        scanf("%f", &matrix[i][j]);
        fflush(stdin);

        }
    }

    //Print Matriz
    printf("\nMatriz:\n");
    for(i=0; i<n; i++){
        printf("\n");
        for(j=0; j<n; j++){
        printf("%f  ", matrix[i][j]);
        }
    }

    //Print Matriz transposta
    printf("\n\nMatriz Transposta:\n");
    for(i=0; i<n; i++){
        printf("\n");
        for(j=0; j<n; j++){
            printf("%f  ", matrix[j][i]);
        }
    }



}