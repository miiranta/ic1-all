#include <stdio.h>
#include <string.h>
#define max 250

int printVowels(char *data);

void main(){

    char string[max];
    
    //Get string
    printf("Insert string:\n");
    fgets(string, max, stdin);
    strtok(string, "\n");
   
    printVowels(string);
}

int printVowels(char *data){
    int i = 0;

    //Remove non-vowels
    for(i = 0; data[i]; i++){
        switch(tolower(data[i])){
            case 'a':
            break;
            case 'e':
            break;
            case 'i':
            break;
            case 'o':
            break;
            case 'u':
            break;
            default:
            data[i] = ' ';
            break;
        }
    }

    //Print
    for(i = 0; data[i]; i++){
        printf("%c", data[i]);
    }

}