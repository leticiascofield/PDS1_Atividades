#include <stdio.h>

float media(float* arr, int n){
    float soma=0;
    for(int i=0; i<n; i++){
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
    float var = (soma/(n-1));
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
    FILE* f=fopen("naturais.txt", "r+t");
    if(f==NULL){
        printf("Erro\n");
        return 1;
    }

    float arr[1000];
    int i=0;
    fscanf(f, "%f", &arr[i]);
    while(!feof(f)){
        i++;
        fscanf(f, "%f", &arr[i]);    
    }
    for(int j=0; j <= i; j++){
        printf("%.1f\n", arr[j]);
    }
    fclose(f);

    printf("Questão 2\n");
    printf("%.1f\n", media(arr, 6));

    printf("Questão 3\n");
    printf("%.1f\n", variancia(arr, 6));

    printf("Questão 4\n");
    printf("%.1f\n", maior(arr, 6));

    printf("Questão 5\n");
    printf("%.1f\n", menor(arr, 6));

    float u[5] = {1, 1, 1, 1, 1};
    float v[5] = {2, 2, 2, 2, 2};

    printf("Questão 6\n");
    printf("%.1f\n", produto_escalar(u, v, 5));

    return 0;
}