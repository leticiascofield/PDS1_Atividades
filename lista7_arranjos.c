/*
1. Escreva um programa em C que lê uma sequência de números de um arquivo e armazena
em um arranjo. Assuma que a quantidade de números no arquivo não ultrapassa o limite máximo
de elementos do arranjo (e.g. 1000).
2. Escreva uma função em C que recebe um arranjo de números reais v e número de
elementos n armazenados em v e que retorna a média dos n elementos armazenados em v.
Assuma que n é menor que o número máximo de elementos do arranjo (e.g. 1000).
3. Escreva uma função em C que recebe um arranjo de números reais v e número de
elementos n armazenados em v e que retorna a variância dos n elementos armazenados em v.
Assuma que n é menor que o número máximo de elementos do arranjo (e.g. 1000).
4. Escreva uma função em C que recebe um arranjo de números reais v e número de
elementos n armazenados em v e que retorna o maior dos n elementos armazenados em v.
Assuma que n é menor que o número máximo de elementos do arranjo (e.g. 1000).
5. Escreva uma função em C que recebe um arranjo de números reais v e número de
elementos n armazenados em v e que retorna o menor dos n elementos armazenados em v.
Assuma que n é menor que o número máximo de elementos do arranjo (e.g. 1000).
6. Escreva uma função em C que recebe dois arranjos de números reais u e v e a dimensão n
dos dois arranjos e que retorna o produto escalar de u e v. O produto escalar de dois arranjos é
dado pela seguinte expressão: u.v = u0.y0 + u1.y1 + u2.y2 + ... + un-1.yn-1. Assuma que n é menor
que o número máximo de elementos do arranjo (e.g. 1000).
*/

#include <stdio.h>

float media(float* arr, int n){
    float soma=0;
    for(int i=0; i<=n; i++){
        soma += arr[i];
    }
    return (soma/n);
}

float variancia(float* arr, int n){
    float soma=0;
    for(int i=0; i<n; i++){
        float var_i = (arr[i] - media(arr, n))*(arr[i] - media(arr, n));
        soma += var_i;
    }
    float var = (soma/(n));
    return (var);
}

float maior(float* arr, int n){
    float n_maior = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > n_maior){
        n_maior = arr[i];
        }
    }
    return (n_maior);
}

float menor(float* arr, int n){
    float n_menor = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] < n_menor){
        n_menor = arr[i];
        }
    }
    return (n_menor);
}

float produto_escalar(float* u, float* v, int n){
    float soma=0;
    float produto=1;
    for(int i=0; i<n; i++){
        produto = u[i] * v[i];
        soma += produto;
    }
    return (soma);
}


int main(){

    printf("Questão 1\n");
    FILE* f=fopen("lista7_naturais.txt", "r+t");
    if(f==NULL){
        printf("Erro\n");
        fclose(f);
        return 1;
    }

    float arr[1000];
    int i=0, j=0;
    int count=0;
    fscanf(f, "%f", &arr[i]);
    while(!feof(f)){
        i++;
        fscanf(f, "%f", &arr[i]);   
    }
    for(int j=0; j <= i; j++){
        printf("%.1f\n", arr[j]);
        count++;
    }
    fclose(f);

    printf("Questão 2\n");
    printf("%.1f\n", media(arr, count));

    printf("Questão 3\n");
    printf("%.1f\n", variancia(arr, count));

    printf("Questão 4\n");
    printf("%.1f\n", maior(arr, count));

    printf("Questão 5\n");
    printf("%.1f\n", menor(arr, count));

    float u[5] = {1, 1, 1, 1, 1};
    float v[5] = {2, 2, 2, 2, 2};

    printf("Questão 6\n");
    printf("%.1f\n", produto_escalar(u, v, 5));

    return 0;
}