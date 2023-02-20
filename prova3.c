#include <stdio.h>
#include <math.h>

// Questão 1
struct individuo{
    int id;
    int* pontos;

    void quantPonto (int x){
        int n[x];
        pontos=n;
    }
};

//Questão 2
int maior(int* vet, int k){
    int maior;
    maior = vet[0];
    for(int i=0; i<k; i++){
        if(vet[i] > maior) {
            maior = vet[i];
        }
    }
    return(maior);
}

//Questão 3
struct restaurante{
    int x;
    int y;
    int nivelPreco;
    char nome[30];
};

void restaurantes(restaurante* w, int n, int m){
    float distancia;
    for(int i=0; i<n; i++){
        distancia = sqrt((w[i].x)*(w[i].x) + (w[i].y)*(w[i].y));
        if (distancia <= m){
            printf("%s\n", w[i].nome);
        }
    }
    return;
}

void precoRestaurantes(restaurante* w, int n, int m, int r){
    float distancia;
    for(int i=0; i<n; i++){
        distancia = sqrt((w[i].x)*(w[i].x) + (w[i].y)*(w[i].y));
        if (distancia <= m){
            if(w[i].nivelPreco < r){
                printf("%s\n", w[i].nome);
            }
        }
    }
    return;
}
int main() {

    // Questão 1
    individuo x;
    int pontosTotais=0, y;

    printf("Escreva o número do indivíduo: ");
    scanf("%d", &x.id);

    printf("Escreva o numero de questoes: ");
    scanf("%d", &y);
    x.quantPonto(y);
    for(int i=0; i<y; i++){
        printf("Escreva os pontos do individuo %d:", x.id);
        scanf ("%d", &x.pontos[i]);
    }

    for(int i=0; i<y; i++){
            pontosTotais += x.pontos[i];
        }
    printf("Os pontos obtidos pelo individuo %d sao: %d\n", x.id, pontosTotais);

    //Questão 2
    int arr[5] = {1,7,3,4,5};

    printf ("%d\n", maior(arr, 5));

    //Questão 3
    printf("Questao 3\n");
    FILE* f=fopen("questao3.txt", "r+t");
    if(f == NULL){
        printf("Erro");
        fclose(f);
        return 1;
    }

    restaurante w[2];
    restaurante a;
    while (!feof(f)){
        fscanf(f, "%d", &w[0].x);
        fscanf(f, "%d", &w[0].y);
        fscanf(f, "%d", &w[0].nivelPreco);
        fscanf(f, "%s", &w[0].nome);
        fscanf(f, "%d", &w[1].x);
        fscanf(f, "%d", &w[1].y);
        fscanf(f, "%d", &w[1].nivelPreco);
        fscanf(f, "%s", &w[1].nome);
    }

    printf("%d\n", w[0].x);
    printf("%d\n", w[0].y);
    printf("%d\n", w[0].nivelPreco);
    printf("%s\n", w[0].nome);

    int r, preco;
    printf("Qual o raio? ");
    scanf("%d", &r);
    printf("Qual o preço? ");
    scanf("%d", &preco);
    restaurantes(w, 2, r);
    precoRestaurantes(w, 2, r, preco);

    return 0;
}