#include <stdio.h>

int dig (int n, int d, int vezes) {
    if (n < 1){
        return (vezes);
    }
    if (n%10==d){
        vezes++;
    }
    return dig (n/10,d,vezes);
}

int mult(int n1, int n2, int multiplicacao){
    if(n2==0){
        return (multiplicacao);
    }

    return(mult (n1, n2-1, multiplicacao+n1));
}

int main() {

    //Questão 1
    /*char nomeArquivo[50];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    FILE* f=fopen( nomeArquivo, "w+t");
    if(f == NULL){
        printf("Erro");
        fclose(f);
        return 1;
    }

    int arr[5];
    printf("Digite 5 números inteiros:\n");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
        fprintf(f, "%d\n", arr[i]);
    }
    fclose(f);
    FILE* f1=fopen( nomeArquivo, "r+t");
    if(f1 == NULL){
        printf("Erro");
        fclose(f1);
        return 1;
    }

    int x;
    while(!feof(f1)){
        fscanf(f1, "%d", &x);
        printf("%d\n", x);
    }

    fclose(f);*/

    //Questão 2
    /*int idade[100], altura[100], divisor=0;
    float soma=0, media;

    int i=1;
    idade[0]=1;
    while(idade[i-1] > 0){
        printf("Escreva a idade da pessoa %d: ", i);
        scanf("%d", &idade[i]);
        if(idade[i] > 0){
            printf("Escreva a altura da pessoa %d: ", i);
            scanf("%d", &altura[i]); 
        } 
        if((idade[i] > 40) && (idade[i] < 50)){
            soma += altura[i];
            divisor++;
        }
        i++;     
    }
    

    media = soma/divisor;
    printf ("A media das alturas das pessoas entre 40 e 50anos eh: %.1f/n", media);*/

    //Questao 3
    /*int n, d;
    printf ("Numero n:\n");
    scanf ("%d", &n);
    printf ("Digito d:\n");
    scanf ("%d", &d);
    printf ("O digito %d ocorre %d vez(es) em %d\n", d, dig(n,d,0), n);*/

    //Questao 4
    int n1, n2;
    printf ("Valores que quer multiplicar:\n");
    scanf ("%d %d", &n1, &n2);
    printf ("Resultado: %d\n", mult(n1, n2, 0));
    return 0;
}