/*
1. Escreva um programa em C que resolva as seguintes expressões:
a) 3 + 4
b) 7/4
c) 3^2
d) 5.3 * 2.1
e) 2 * 5 – 2
f) 2 + 2 * 5
g) (2 + 5) * 3
h sin(3.141502)
i) sqrt(5)
j) 1 + 2 + 3
k) 1 * 2 * 3
l) (1 + 2 + 3) / 3.0
m) (2 + 4) * (3 – 1)
n) (9 / 3) + (3 * 2)
o) sin(4.5) + cos(3.7)
p) log(2.3) – log(3.1)
q) log (7) + (log(7) * log(7) – cos(log(7)))
r) (10.3 + 8.4)/50.3 - (10.3 + 8.4)
s) (cos(0.8) + sin(0.8)) * (cos(0.8) – sin(0.8))
2. Escreva um programa em C que lê quatro números reais do teclado (a, b, c e
d) e exibe o resultado das seguintes expressões:
a) a + b
b) a/c
c) a2
d) b * c
e) a * b – c
f) a + b * c
g) (a + b) * c
h) sin(a)
i) sqrt(b)
j) a + b + c
k) a * b * c
l) (a + b + c) / d
m) (a + b) * (a – d)
n) (b / c) + (a * d)
o) sin(b) + cos(c)
p) log(a) – log c
q) log(a) + (log(b) * log(d) – cos(log(c)))
r) (b + a)/c - (d + a)
s) (cos(d) + sin(c)) * (cos(b) – sin(a))
3. Escreva um programa em C que lê três números reais do teclado (a, b e c) e
exibe o resultado das seguintes expressões:
a) Média: média de a, b e c.
b) Média ponderada: média ponderada de a, b e c onde a tem peso 3, b 4 e c 5.
c) Perímetro: perímetro de um círculo de raio a.
d) Área do círculo: área de um círculo de raio a.
e) Área do triângulo: área de um triângulo de base b e altura c.
f) Hipotenusa: hipotenusa de um triângulo retângulo, cujos lados conhecidos são b e c.
g) Raízes: raízes da equação do segundo grau definida por a.x2 + b.x + c.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    printf("1.\n");
    printf("a) %d\n", 3+4);
    printf("b) %f\n", 7/4.0);
    printf("c) %d\n", 3*3);
    printf("d) %f\n", 5.3 * 2.1);
    printf("e) %d\n", 2 * 5 - 2);
    printf("f) %d\n", 2 + 2 * 5);
    printf("g) %d\n", (2 + 5) * 3);
    printf("h) %f\n", sin(3.141502));
    printf("i) %f\n", sqrt(5));
    printf("j) %d\n", 1 + 2 + 3);
    printf("k) %d\n", 1 * 2 * 3);
    printf("l) %d\n", (1 + 2 + 3) / 3);
    printf("m) %d\n", (2 + 4) * (3 - 1));
    printf("n) %d\n", (9 / 3) + (3 * 2));
    printf("o) %f\n", sin(4.5) + cos(3.7));
    printf("p) %f\n", log(2.3) - log(3.1));
    printf("q) %f\n", log (7) + (log(7) * log(7) - cos(log(7))));
    printf("r) %f\n", (10.3 + 8.4)/50.3 - (10.3 + 8.4));
    printf("s) %f\n", (cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8)));

    printf("\n2.\n");
    float a, b, c, d;

    printf ("Valor de a: ");
    scanf ("%f", &a);
    printf ("Valor de b: ");
    scanf ("%f", &b);
    printf ("Valor de c: ");
    scanf ("%f", &c);
    printf ("Valor de d: ");
    scanf ("%f", &d);

    printf ("a) %f\n", a + b);
    printf ("b) %f\n", a/c);
    printf ("c) %f\n", a * a);
    printf ("d) %f\n", b * c);
    printf ("e) %f\n", a * b - c);
    printf ("f) %f\n", a + b * c);
    printf ("g) %f\n", (a + b) * c);
    printf ("h) %f\n", sin(a));
    printf ("i) %f\n", sqrt(b));
    printf ("j) %f\n", a + b + c);
    printf ("k) %f\n", a * b * c);
    printf ("l) %f\n", (a + b + c) / d);
    printf ("m) %f\n", (a + b) * (a - d));
    printf ("n) %f\n", (b / c) + (a * d));
    printf ("o) %f\n", sin(b) + cos(c));
    printf ("p) %f\n", log(a) - log (c));
    printf ("q) %f\n", log(a) + (log(b) * log(d) - cos(log(c))));
    printf ("r) %f\n", (b + a)/c - (d + a));
    printf ("s) %f\n", (cos(d) + sin(c)) * (cos(b) - sin(a)));

    printf("\n3.\n");

    printf ("Valor de a: ");
    scanf ("%f", &a);
    printf ("Valor de b: ");
    scanf ("%f", &b);
    printf ("Valor de c: ");
    scanf ("%f", &c);

    printf ("a) Media: %f\n", (a+b+c) / 3);
    printf ("b) Media ponderada: %f\n", (3*a+4*b+5*c) / 3);
    printf ("c) Perimetro: %f\n", 2*3.1415*a);
    printf ("d) Area do circulo: %f\n", 3.1415*a*a);
    printf ("e) Area do triangulo: %f\n", (b*c) / 2);
    printf ("f) Hipotenusa: %f\n", sqrt((b*b) + (c*c)));
    printf ("g) Raizes: %f e %f\n", (b + sqrt(b*b - 4*a*c))/(2*a), (b - sqrt(b*b - 4*a*c))/(2*a));

    return 0;
}