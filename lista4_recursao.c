/*
1. Escreva as seguintes funções recursivas em C:
a) fat(n): retorna o valor do fatorial de n.
b) mdc(a,b): retorna o máximo divisor comum entre a e b.
c) mdc3(a,b,c): retorna o máximo divisor comum entre a, b e c.
d) fib(n): retorna o n-ésimo termo da série de Fibonacci
e) primo(x): predicado que testa se um número x é primo.
f) decrescente(x): procedimento que escreve uma seqüência de inteiros menores que x e
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
        if(n==0)
            return n=1;
        else return n*fat(n-1);

}

int mdc (int a, int b){
    if (a==0)
        return (b);
    if (b==0)
        return (a);
    if (a==b)
        return(a);
    else if (a > b){
        a = a-b;
    }
        else if (a < b){
            b = b-a;
        }
        return (mdc (a,b));
}

int mdc3 (int a, int b, int c, int n){
    if (n==0)
        if (a > b && b > c)
            n = c;
        else if (a > b)
            n = b;
        else
            n = a;
    if (a%n==0 && b%n==0 && c%n==0)
        return (n);
    else
        n = n-1;
    return (mdc3 (a,b,c,n));
}

int fib (int n){
    if (n==0 || n==1) {
        return (1);
    }
    return ( fib(n-1)+fib(n-2));
}

int primo (int x, int d) {
    if (d==1) return (1);
    if (x%d==0) return(0);
    return (primo(x, d-1));
}

int decrescente (int x){
    x--;
    if (x==0){
        return 0;
    }
    printf ("%d \n", x);
    return (decrescente(x));
}

int res(int a, int b, int c){ 
    if (c>= b){
        c=c-b;
        return res(a,b,c);
    }
    else return c;    
}

int form(int n, int soma){
    if (n==0) return (soma);
    soma = n*n + soma;
    return (form (n-1, soma));
}

int mmc(int a, int b, int c){                              
    if (c%a==0 && c%b==0){
        return c;
    } 
    else return (mmc(a,b,c++));   
}

int div(int a, int b){                        
    static int count=0;
    if (a>=b){
        a=a-b;
        count++;
        return (div(a,b));
    }
    else return count;
}

float Sqrt(int n){                                        
    static float x=1;
    if(x*x == n){
        return x;
    }
    else if(x*x > n){
        return x=x-0.001;
    }
    else{
        x=x+0.001;
        Sqrt(n);
    }
}

int dig(int n){                                          
    if(n%10==n){
        return n;
    }
    else{
        return((n%10)+dig(n/10));
    }
}

int Exp(int a, int b){                                    
    if(b==0){
        return 1;
    }
    else{
        return (a*Exp(a, b-1));
    }
}

int crescente(int n){    
    static int i=1;                               
    if(i==n){
        return 0;
    }
    else{
        printf("%d, ", i);
        i++;
        return crescente(n);
    }
}

int main()
{
    int n=0, a=0, b=0, c=0, x=0, d=0, soma=0;

    printf ("1.a)Escreva um valor:\n");
    scanf ("%d", &n);
    printf ("Fatorial de %d: %d\n",n, fat(n));

    printf ("1.b)Escreva dois valores:\n");
    scanf ("%d %d", &a, &b);
    printf ("MDC de %d e %d: %d\n",a, b, mdc(a,b));

    printf ("1.c)Escreva tres valores:\n");
    scanf ("%d %d %d", &a, &b, &c);
    printf ("MDC de %d, %d e %d: %d\n",a, b, c, mdc3(a,b,c,n));

    printf ("1.d)Escreva um valor:\n");
    scanf ("%d", &n);
    printf ("Termo %d da serie Fibonacci: %d\n",n, fib(n));

    printf ("1.e)Escreva um valor:\n");
    scanf ("%d", &x);
    printf ("%d eh um numero primo: %d\n",x, primo(x,x-1));

    printf ("1.f)Escreva um valor:\n");
    scanf ("%d", &x);
    printf ("%d", decrescente(x));
 
    printf ("1.g)Escreva dois valores:\n");
    scanf ("%d %d", &a, &b);
    printf ("O resto de %d dividido por %d: %d\n",a, b, res(a,b,a));

    printf ("1.h)Escreva um valor:\n");
    scanf ("%d", &n);
    printf ("O resultado do somatorio eh: %d/n", form(n, soma));
  
    printf("1.i)Escreva dois valores:\n");
    scanf("%d %d", &a, &b);
    printf("MMC de %d e %d: %d\n", a, b, mmc(a,b,a));
    
    printf("1.j)Escreva dois valores:\n");
    scanf("%d %d", &a, &b);
    printf("O resultado da divisao inteira de %d por %d eh: %d\n", a, b, div(a,b));
    
    printf("1.l)Escreva um valor:\n");
    scanf("%d", &n);
    printf("A raiz quadrada inteira de %d eh: %.4f\n", n, Sqrt(n));
    
    printf("1.m)Escreva um valor:\n");
    scanf("%d", &n);
    printf("A soma dos digitos de %d eh: %d\n", n, dig(n));
    
    printf("1.n)Escreva dois valores:\n");
    scanf("%d %d", &a, &b);
    printf("O valor de %d elevado a %d eh: %d\n", a, b, Exp(a,b));
    
    printf("1.o)Escreva um valor:\n");
    scanf("%d", &n);
    crescente(n);
    printf("\n");


    return 0;
}