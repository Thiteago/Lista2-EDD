#include <stdio.h>

void ex1(){
    int fat, numero, fatWhile = 1, fatDoWhile = 1;
    printf("Insira o valor a ser calculado a fatorial com laco for: ");
    scanf("%d", &numero);

    for(fat=1; numero > 1; numero--){
        fat = fat * numero;
    }

    printf("Insira o valor a ser calculado a fatorial com laco while: ");
    scanf("%d", &numero);

    while(numero > 1){
        fatWhile = fatWhile * numero;
        numero--;
    }

    printf("Insira o valor a ser calculado a fatorial com laco Do while: ");
    scanf("%d", &numero);

    do{
        fatDoWhile = fatDoWhile * numero;
        numero--;
    }while(numero > 1);

    printf("O resultado da fatorial com for e: %d\n", fat);
    printf("O resultado da fatorial com while e: %d\n", fatWhile);
    printf("O resultado da fatorial com Do while e: %d\n", fatDoWhile);

    return;
}

void ex2(){
    int n, div = 0;
    printf("Insira um numero a ser validado como primo: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            div++;
        }
    }

    if(div == 2){
        printf("O numero %d e primo!", n);
    }else{
        printf("o numero %d nao e primo!", n);
    }

}

void ex3(){
    int div = 0, n, primos = 0, i = 1, j = 1;

    printf("Insira a quantidade de numeros primos a serem visualizados: ");
    scanf("%d", &n);

    while(primos < n){

        for(i=1; i<=j; i++){
            if(j%i == 0){
                div++;
            }
        }

        if(div == 2){
            primos++;
            printf("%d \n", j);
        }
        div = 0;
        j++;

    }
}
int main(void){

    ex3();
}
