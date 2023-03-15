/*
1. Escreva funções em C que resolvem os seguintes problemas:
a) Média: calcula a média de a, b e c.
b) Média ponderada: calcula a média ponderada de a, b e c onde a tem peso 3, b 4 e c 5.
c) Perímetro: calcula o perímetro de um círculo de raio r.
d) Área do círculo: calcula a área de um círculo de raio r.
e) Área do triângulo: calcula a área de um triângulo de base b e altura h.
f) Área da caixa: calcula a área de uma caixa de dimensões a, b e c.
g) Volume da caixa: calcula o volume de uma caixa de dimensões a, b e c.
h) Área do cilindro: calcula a área de um cilindro de raio r e altura h.
i) Volume do cilindro: calcula o volume de um cilindro de raio r e altura h.
j) Hipotenusa: calcula a hipotenusa de um triângulo retângulo com lados b e c.
k) Raiz positiva: calcula a raiz positiva da equação do segundo grau definida por
a.x2+b.x+c.
2. Escreva programas em C para verificar se as funções do exercício anterior
estão corretas.
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14

float media(float a, float b, float c)
{
    return ((a + b + c) / 3.0);
}

float mediaPonderada(float a, float b, float c)
{
    return ((3*a + 4*b + 5*c) / 3.0);
}

float perimetro(float r)
{
    return (2*PI*r);
}

float areaC(float r)
{
    return (PI*r*r);
}

float areaT(float b, float h)
{
    return (b*h) / 2;
}

float areaCaixa(float b, float h, float c)
{
    return (2*b*h + 2*b*c + 2*h*c);
}

float volumeCaixa(float b, float h, float c)
{
    return (b*h*c);
}

float areaCilindro(float r, float h)
{
    return (PI*r*r*2 + 2*PI*r*h);
}

float volumeCilindro(float r, float h)
{
    return (PI*r*r*2*h);
}

float hipotenusa(float a, float b)
{
    return (sqrt(a*a + b*b));
}

 float raizPositiva(float a, float b, float c)
{
    return (-b + (b*b - 4*a*c))/ 2*a;
}

int main()
{

    float a, b, c, r, h;

    printf("1.a) ");
    printf("Informe três números: \n");
    scanf("%f %f %f", &a, &b, &c);
    printf("A media eh: %f\n", media(a, b, c));

    printf ("1.b) ");
    printf("Informe três números: \n");
    scanf("%f %f %f", &a, &b, &c);
    printf("A media ponderada eh: %f\n", mediaPonderada(a, b, c));

    printf ("1.c) ");
    printf("Informe o raio do circulo: \n");
    scanf("%f", &r);
    printf("O perimetro do circulo eh: %f\n", perimetro(r));

    printf ("1.d) ");
    printf("Informe o raio do circulo: \n");
    scanf("%f", &r);
    printf("A area do circulo eh: %f\n", areaC(r));

    printf ("1.e) ");
    printf("Informe a base do triangulo: \n");
    scanf("%f", &b);
    printf("Informe a altura do triangulo: \n");
    scanf("%f", &h);
    printf("A area do triangulo eh: %f\n", areaT(b, h));

    printf ("1.f) ");
    printf("Informe a base da caixa: \n");
    scanf("%f", &b);
    printf("Informe a altura da caixa: \n");
    scanf("%f", &h);
    printf("Informe o comprimento da caixa: \n");
    scanf("%f", &c);
    printf("A area da caixa eh: %f\n", areaCaixa(b, h, c));

    printf ("1.g) ");
    printf("Informe a base da caixa: \n");
    scanf("%f", &b);
    printf("Informe a altura da caixa: \n");
    scanf("%f", &h);
    printf("Informe o comprimento da caixa: \n");
    scanf("%f", &c);
    printf("O volume da caixa eh: %f\n", volumeCaixa(b, h, c));

    printf ("1.h) ");
    printf("Informe o raio do cilindro: \n");
    scanf("%f", &r);
    printf("Informe a altura do cilindro: \n");
    scanf("%f", &h);
    printf("A area do cilindro eh: %f\n", areaCilindro(r, h));

    printf ("1.i) ");
    printf("Informe o raio do cilindro: \n");
    scanf("%f", &r);
    printf("Informe a altura do cilindro: \n");
    scanf("%f", &h);
    printf("O volume do cilindro eh: %f\n", volumeCilindro(r, h));

    printf ("1.j) ");
    printf("Informe o cateto A: \n");
    scanf("%f", &a);
    printf("Informe o cateto B: \n");
    scanf("%f", &b);
    printf("A hipotenusa eh: %f\n", hipotenusa(a, b));

    printf ("1.k) ");
    printf("Informe o valor de a: \n");
    scanf("%f", &a);
    printf("Informe o valor de b: \n");
    scanf("%f", &b);
    printf("Informe o valor de c: \n");
    scanf("%f", &c);
    printf("A raiz positiva eh: %f\n", raizPositiva(a, b, c));
}