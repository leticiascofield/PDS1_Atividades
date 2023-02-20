/*
1. Escreva um programa em C que lê um número n do teclado e gera um arquivo com os n
primeiros números primos.
2. Escreva um programa em C que lê um arquivo com números naturais (um número por
linha) e grava outro arquivo onde cada linha indica se o respectivo número é primo ou não.
3. Escreva um programa em C que lê um arquivo com números naturais e gera dois arquivos:
“primos.txt” com aqueles números que são primos e “outros.txt” com aqueles números que não
são primos.
4. Escreva um programa em C que lê um arquivo com números reais (um número por linha) e
grava outro arquivo onde cada linha mostra o valor do respectivo número aplicado a função
f(x)= x^2 - 5x + 1.
5. Escreva um programa em C que lê um arquivo com números reais (um número por linha) e
grava outro arquivo onde cada linha mostra o valor do respectivo número aplicado a função
f(x)= ax^3 + bx^2 + cx + d, onde a, b, c e d são lidos do teclado.
*/

#include <stdio.h>
#include <math.h>

int primo (int n) {
    int i = 2;
    while (i < n) {
        if (n % i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}

float funcaof8 (float x) {
    return ((x*x)- (5*x) + 1);
}

float funcaof10 (float a, float b, float c, float d, float x) {
    return ((a*x*x*x) + (b*x*x) + (c*x) + d);
}
int main(){

    printf ("Questão 1\n");
    FILE* f1=fopen("Primos.txt", "w+t");
    if(f1==NULL){
        printf("ERRO\n");
        fclose(f1);
        return 1;
    }


    int n;
    printf("Insira o número de primos(n): \n");
    scanf("%d", &n);

    int contPrimos = 0;
    int i = 2;
    while(contPrimos<n){
        if(primo(i) == 1){
            fprintf(f1, "%d\n", i);
            contPrimos++;
        }
        i++;
    }

    fclose(f1);

    FILE* f2=fopen("naturais.txt", "r+t");
    if(f2==NULL){
        printf("ERRO\n");
        fclose(f2);
        return 1;
    }
    FILE* f3=fopen("eh_primo.txt", "w+t");
    if(f3==NULL){
        fclose(f2);
        printf("ERRO\n");
        fclose(f3);
        return 1;
    }

    printf ("Questão 2\n");
    fscanf(f2, "%d", &i);
    while (!feof(f2)){
        fprintf (f3, "%d %d\n", i, primo(i));
        fscanf(f2, "%d", &i);
    }
    fclose(f2);
    fclose(f3);

    printf ("Questão 3\n");
    FILE* f6=fopen("naturais.txt", "r+t");
    if(f6==NULL){
        printf("ERRO\n");
        fclose(f6);
        return 1;
    }

    FILE* f4=fopen("primos.txt", "w+t");
    if(f4==NULL){
        fclose(f6);
        printf("ERRO\n");
        fclose(f4);
        return 1;
    }

    FILE* f5=fopen("outros.txt", "w+t");
    if(f5==NULL){
        fclose(f6);
        fclose(f4);
        printf("ERRO\n");
        fclose(f5);
        return 1;
    }

    fscanf(f6, "%d", &i);
    while (!feof(f6)){
        if (primo(i) == 0) {
            fprintf (f5, "%d\n", i);

        }
        else {
            fprintf (f4, "%d\n", i);   
        }
        fscanf(f6, "%d", &i);
    }

    fclose(f4);
    fclose(f5);
    fclose(f6);

    printf ("Questão 4\n");
    FILE* f7=fopen("reais.txt", "r+t");
    if(f7==NULL){
        printf("ERRO\n");
        fclose(f7);
        return 1;
    }
    FILE* f8=fopen("funcaof8.txt", "w+t");
    if(f8==NULL){
        fclose(f7);
        printf("ERRO\n");
        fclose(f8);
        return 1;
    }

    float x;
    fscanf(f7, "%f", &x);
    while (!feof(f7)){
        fprintf (f8, "%.1f\n", funcaof8(x));
        printf ("%.1f\n", funcaof8(x));
        fscanf(f7, "%f", &x);
    }

    fclose(f7);
    fclose(f8);

    printf ("Questão 5\n");
    FILE* f9=fopen("reais.txt", "r+t");
    if(f9==NULL){
        printf("ERRO\n");
        fclose(f9);
        return 1;
    }
    FILE* f10=fopen("funcaof10.txt", "w+t");
    if(f10==NULL){
        fclose(f9);
        printf("ERRO\n");
        fclose(f10);
        return 1;
    }

    float a, b, c, d;
    printf ("Escreva os valores de a, b, c e d:\n");
    scanf ("%f %f %f %f", &a, &b, &c, &d);

    fscanf(f9, "%f", &x);
    while (!feof(f9)){
        fprintf (f10, "%.1f\n", funcaof10(a, b, c, d, x));
        printf ("%.1f\n", funcaof10(a, b, c, d, x));
        fscanf(f9, "%f", &x);
    }

    fclose(f9);
    fclose(f10);


    return 0;
}