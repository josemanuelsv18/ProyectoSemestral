#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(){
    char *arreglo[]={
        "0","0","0","0","0"
    };
    char palabra[]="sustituir";
    arreglo[2]=palabra;
    printf("%s - %s - %s - %s - %s\n",arreglo[0],arreglo[1],arreglo[2],arreglo[3],arreglo[4]);
    return(0);
}