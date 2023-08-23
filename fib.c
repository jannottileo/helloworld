#include <stdio.h>
#include <stdlib.h>

int fib(int n){

    if(n==1){
        return 0;
        
    } else if(n==2){
        return 1;

    }else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    int n;

    printf("\nInsira o n-ésimo termo de Fibonacci: ");

    scanf("%d", &n);

    while (n < 0){
        printf("\nERRO! Insira um número válido: ");
        scanf("%d", &n);
    }

    printf("O termo de número %d em Fibonacci é: %d", n, fib(n));

return EXIT_SUCCESS;

}