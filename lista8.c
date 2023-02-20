#include <stdio.h>
#include <stdbool.h>

float media_matriz(int n, float mat[][100]){
    float soma=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            soma += mat[i][j];
        }
    }
    float media = soma/(n*n);
    return(media);
}

void identidade(int n, float A[][100]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==i){
                A[i][j]=1;
            }
            else{
                A[i][j]=0;
            }
        }
    }
}


void transposta(int n, float A[][100], float T[][100]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            T[i][j] = A[j][i];
        }
    }
}

bool simetrica(int n, float A[][100]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(A[i][j] != A[j][i]){
                return(false);
            }
        }
    }
    return(true);
}

void soma_matriz(int n, float A[][100], float B[][100], float S[][100]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            S[i][j]=A[i][j]+B[i][j];
        }
    }
}


void mult_matriz(int n, float A[][100], float B[][100], float P[][100]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            P[i][j]= (A[i][0]*B[0][j]) + (A[i][1]*B[1][j]) + (A[i][2]*B[2][j]);
        }
    }
}

int main(){

    printf("\nQuestao 1\n");

    FILE* f=fopen("matriz.txt", "r+t");
    if(f==NULL){
        printf("Erro\n");
        return 1;
    }

    int n, m;
    float mat[100][100];
    printf("Tamanho da matriz n x m:\n");
    fscanf(f, "%d %d", &n, &m); //Pega os dois primeiros numeros do arquivo
    printf("%d %d\n", n, m);

    printf("Matriz: \n");
    for(int i=0; i<n; i++){ 
        for(int j=0; j<m; j++){
            fscanf(f, "%f", &mat[i][j]);
            printf ("%.0f  ", mat[i][j]);
        }
        printf("\n");
    }

    fclose(f);

    printf("\nQuestao 2\n");

    printf("Media dos valores da matriz: %.1f\n", media_matriz(n , mat));

    printf("\nQuestao 3\n");

    float iden[100][100];
    identidade(n, iden);
    printf("Matriz identidade:\n");
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
            printf("%.0f  ", iden[i][j]);
        }
        printf("\n");
    }

    printf("\nQuestao 4\n");

    float transp[100][100];
    transposta(n, mat, transp); //Por ser void tem que chamar a funcao
    printf("Matriz transposta:\n");
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
            printf("%.0f  ", transp[i][j]);
        }
        printf("\n");
    }

    printf("\nQuestao 5\n");
    int i=0, j=0;
    printf("A matriz eh simetrica? %d\n", simetrica(n , mat));

    printf("\nQuestao 6\n");

    float A[100][100], B[100][100], S[100][100];
    float a1[3] = {1, 2, 3};
    float a2[3] = {4, 5, 6};
    float a3[3] = {7, 8, 9};
    float b1[3] = {1, 2, 3};
    float b2[3] = {4, 5, 6};
    float b3[3] = {7, 8, 9};

    printf("Matriz A:\n");   
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
            A[0][j] = a1[j];
            A[1][j] = a2[j];
            A[2][j] = a3[j];
            printf ("%.0f  ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B:\n"); 
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
            B[0][j] = b1[j];
            B[1][j] = b2[j];
            B[2][j] = b3[j];
            printf ("%.0f  ", B[i][j]);
        }
        printf("\n");
    }

    soma_matriz(n, A, B, S);
    printf("Soma das matrizes A e B:\n"); 
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
            printf("%.0f  ", S[i][j]);
        }
        printf("\n");
    }

    printf("\nQuestao 7\n");

    float P[100][100];
    mult_matriz(n, A, B, P);
    printf("Produto das matrizes A e B:\n"); 
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
            printf("%.0f  ", P[i][j]);
        }
        printf("\n");
    }

    return 0;
}