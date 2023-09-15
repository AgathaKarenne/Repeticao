#include<stdio.h>

main(){

    //escrever os numeros de 1 a 10;
    int n = 0, numero = 6, res;

    while(n <= 10){
        printf("\nvalor da variavel: %d", n);
        n++;
    }

    //tabuada de multiplicação;
    while(n <= 100){
        res = numero * n;
        printf("\n%d * %d = %d", numero, n, res);
        n++;

    }
}
