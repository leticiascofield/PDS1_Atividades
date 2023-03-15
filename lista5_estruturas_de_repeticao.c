/*
1. Escreva as seguintes funções utilizando estruturas de repetição em C:
a) fat(n): retorna o valor do fatorial de n.
b) mdc(a,b): retorna o máximo divisor comum entre a e b.
c) mdc3(a,b,c): retorna o máximo divisor comum entre a, b e c.
d) fib(n): retorna o n-ésimo termo da série de Fibonacci
e) primo(x): predicado que testa se um número x é primo.
f) decrescente(x): procedimento que escreve uma sequência de inteiros menores que x e
maiores que 0.
g) res(a,b): retorna o resto da divisão entre a e b.
h) form(n): retorna o valor do somatório de i*i, com i variando de 1 até n.
i) mmc(a, b): retorna o menor múltiplo comum de a e b.
j) div(a, b): retorna o resultado da divisão inteira de a por b.
l) sqrt(n): retorna a raiz quadrada de n (com precisão de 0.001).
m) dig(n): retorna a soma dos dígitos de um inteiro positivo n.
A soma dos dígitos de 132, por exemplo, é 6.
n) exp(k, n): retorna k^n.
o) crescente(x): escreve em ordem crescente, todos os inteiros maiores que 0 e menores ou
iguais a x.
2. Escreva programas em C para testar todas as funções definidas acima.
*/

#include <stdio.h>
#include <math.h>

int fat (int n){
    int f=1;
    for (int i=1;i<=n;i++){
            f = f*i;
    }
    return (f);
}

int mdc(int a, int b){
    int m=1;
    int i=1;
    do {
        if ((a % i == 0) && (b % i == 0)){
            m = i;
        }
        i++;
    } while ((i <= a) && (i <= b));
    return m;
}

int mdc3 (int a, int b, int c){
    int m=1;
    int i=1;
    do {
        if ((a % i == 0) && (b % i == 0) && (c % i == 0)){
            m = i;
        }
        i++;
    } while ((i <= a) && (i <= b) && (i <= c));
    return m;
}

int fib (int n){
    int soma = 1;
    int somaAnt = 1;
    int soma2Ant;
    if (n==0 || n==1) {
        return (1);
    }
    for (int i=1;i<=n;i++){
        soma2Ant = somaAnt;
        somaAnt = soma;
        soma = somaAnt + soma2Ant;
    }
    return (soma);
}

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

void decrescente (int n){
    for (int i = n-1; i > 0; i--){
        printf("%d\n", i);
    }
}

int res(int a, int b){
    while(a >= b){
		a-=b;
	}
	return(a);
}

int form(int n){
    int soma = 0;
    if (n==0) return (soma);
    for (int i=1; i<=n; i++){
    soma = i*i + soma;
    }
    return (soma);
}

int mmc(int a, int b){
    for (int i=a; i<=(a*b); i++){
        if ((i%a==0) && (i%b==0)){
           return (i);
        }
    }
}

int div(int a, int b){
    int count =0;
    while(a >= b){
		a-=b;
        count++;
	}
	return(count);
}

int Sqrt(int n){
     for (int i=n; i!=0; ){
        if ((i*i >= n-0.001) && (i*i <= n+0.001)){
            return (i);
        }
        else if (i*i>n){
            i = i*0.5;
        }
        else i = i*1.5;
    }
}

int dig(int n){
    int soma = 0, x;
    while (n > 0){
        x = n%10;
        soma = soma + x;
        n = n/10;
    }
    return (soma);
}

int Exp(int k, int n){
    int valor = 1;
    for (int i=1; i<=n; i++){
        valor = valor * k;
    }
    return (valor);
}

void crescente(int n){
    for (int i = 1; i < n; i++){
        printf("%d\n", i);
    }
}

int main(){
    int num=0, n=0, a=0, b=0, c=0,x=0, d=0, k=0;

    printf ("1.a)Escreva um valor:\n");
    scanf ("%d", &n);
    printf ("Fatorial de %d: %d\n",n, fat(n));

    printf ("1.b)Escreva dois valores:\n");
    scanf ("%d %d", &a, &b);
    printf ("MDC de %d e %d: %d\n",a, b, mdc(a,b));

    printf ("1.c)Escreva tres valores:\n");
    scanf ("%d %d %d", &a, &b, &c);
    printf ("MDC de %d, %d e %d: %d\n", a, b, c, mdc3(a,b,c));

    printf ("1.d)Escreva um valor:\n");
    scanf ("%d", &n);
    printf ("Termo %d da serie Fibonacci: %d\n",n, fib(n));

    printf ("1.e)Escreva um valor:\n");
    scanf ("%d", &n);
    printf ("%d eh um numero primo: %d\n",n, primo(n));

    printf ("1.f)Escreva um valor:\n");
    scanf ("%d", &n);
    printf ("Ordem decrescente:\n");
    decrescente(n);

    printf ("1.g)Escreva dois valores:\n");
    scanf ("%d %d", &a, &b);
    printf ("O resto de %d dividido por %d: %d\n",a, b, res(a,b));

    printf ("1.h)Escreva um valor:\n");
    scanf ("%d", &n);
    printf ("Valor do somatorio dos quadrados: %d\n", form(n));

    printf ("1.i)Escreva dois valores:\n");
    scanf ("%d %d", &a, &b);
    printf ("MMC de %d e %d: %d\n", a, b, mmc(a,b));

    printf("1.j)Escreva dois valores:\n");
    scanf("%d %d", &a, &b);
    printf("Resultado da divisao inteira de %d por %d: %d\n", a, b, div(a,b));

    printf("1.l)Escreva um valor:\n");
    scanf("%d", &n);
    printf("Raiz quadrada inteira de %d: %d\n", n, Sqrt(n));

    printf("1.m)Escreva um valor:\n");
    scanf("%d", &n);
    printf("Soma dos digitos de %d: %d\n", n, dig(n));

    printf("1.n)Escreva dois valores:\n");
    scanf("%d%d", &k,&n);
    printf("Valor de %d elevado a %d: %d\n", k, n, Exp(k,n));

    printf("1.o)Escreva um valor:\n");
    scanf("%d", &n);
    printf ("Ordem crescente:\n");
    crescente(n);


    return 0;
}