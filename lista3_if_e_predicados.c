/*
1. Escreva as seguintes funções em C:
a) max(a,b,c): Retorna o maior dentre três números.
b) min(a,b,c): Retorna o menor dentre três números.
2. Escreva os seguintes predicados em C:
a) par(x): testa se um número é par;
b) dentro(x,y,z): testa se o número x está dentro do intervalo [y z];
c) fora(x,y,z): testa se o número x está fora do intervalo [y z];
3. Defina o predicado bissexto(ano) que testa se um ano é bissexto. Considere que
bissexto é aquele ano que é divisível por 400 ou é divisível por 4 e, nesse caso, não é
divisível por 100. Por exemplo:
bissexto(2000) --> verdadeiro
bissexto(1900) --> falso
bissexto(3600) --> verdadeiro
bissexto(2004) --> verdadeiro
*/

#include <stdio.h>

float max (float a, float b, float c){
    if ((a > b) && (a > c)){
        return a;
    }
    if ((b > a) && (b > c)){
        return b;
    }
    if ((c > a) && (c > b)){
        return c;
    }
}

float min (float a, float b, float c){
    if ((a < b) && (a < c)){
        return a;
    }
        else if (b < c){
            return b;
        }
        else return c;
}

int par(int x){
    return (x%2 == 0);
}

int dentro(float w, float y, float z){
    return (w>= y) && (w<= z);
}

int fora(float w, float y, float z){
    return (!dentro(w,y,z));
}

int bissexto(int ano){
    if (ano%100==0){
        if (ano%400==0){
            return 1;
        }
            else return 0;
    }
    else if (ano%4==0){
        return 1;
    }
        else return 0;
}


int main()
{
    float a, b, c;
    float w, y, z;
    int x, ano;

    printf ("1. Escreva tres numeros: \n");
    scanf ("%f %f %f", &a, &b, &c);
    printf ("Maior numero: %.2f\n", max(a,b,c));
    printf ("Menor numero: %.2f\n", min(a,b,c));

    printf ("2.a) Escreva um numero: \n");
    scanf ("%d", &x);
    printf ("Esse numero eh par? %d\n", par(x));

    printf("2.b) Escreva um numero: \n");
    scanf ("%f", &w);
    printf("Escreva dois outros numeros: \n");
    scanf ("%f %f", &y, &z);
    printf ("O numero %.1f esta dentro do intervalo [%.1f,%.1f]? %d\n", w, y, z, dentro(w,y,z));

    printf("2.c) Escreva um numero: \n");
    scanf ("%f", &w);
    printf("Escreva dois outros numeros: \n");
    scanf ("%f %f", &y, &z);
    printf ("O numero %.1f esta fora do intervalo [%.1f,%.1f]? %d\n", w, y, z, fora(w,y,z));

    printf("3. Escreva um ano: \n");
    scanf ("%d", &ano);
    printf ("O ano %d eh bissexto? %d\n", ano, bissexto(ano));

    return 0;
}