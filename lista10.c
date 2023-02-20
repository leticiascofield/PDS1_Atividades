#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//Parete I
//Questao 1
struct Ponto {
    float x;
    float y;
    float distancia(Ponto& p);
    void atribuir(float a, float b);

};

//Questao 2
float Ponto::distancia(Ponto& p) {
    return(sqrt((this->x-p.x)*(this->x-p.x) + (this->y-p.y)*(this->y-p.y)));
}

//Questao 3
void Ponto::atribuir(float a, float b) {
    this->x = a;
    this->y = b;
}

//Parte II
//Questao 4
struct Triangulo {
    Ponto p1, p2, p3, pmedio;

    float perimetro();
    float area();
    bool equilatero();
    bool semelhante(Triangulo& t);
};

//Questao 5
float Triangulo::perimetro() {
    return(this->p1.distancia(this->p2)+this->p2.distancia(this->p3)+this->p3.distancia(this->p1));
}

//Questao 6
float Triangulo::area() {
    return((this->p1.distancia(this->p2)) * (this->p3.distancia(this->pmedio))/2);
}

//Questao 7
bool Triangulo::equilatero() {
    if ((this->p1.distancia(this->p2) == this->p2.distancia(this->p3)) && (this->p2.distancia(this->p3) == this->p3.distancia(this->p1))){
        return(true);
    }
    return(false);
}

//Questao 8
bool Triangulo::semelhante(Triangulo& t) {
    if ((this->p1.distancia(this->p2))/(t.p1.distancia(t.p2)) == (this->p2.distancia(this->p3))/(t.p2.distancia(t.p3))){
        return(true);
    }
    else if ((this->p1.distancia(this->p2))/(t.p2.distancia(t.p3)) == (this->p2.distancia(this->p3))/(t.p1.distancia(t.p3))){
        return(true);
    }
    else if ((this->p1.distancia(this->p2))/(t.p1.distancia(t.p3)) == (this->p2.distancia(this->p3))/(t.p1.distancia(t.p2))){
        return(true);
    }
    return(false);
}

//Parte III
//Questao 9
struct Retangulo {
    Ponto p1, p2, p3, p4;

    float perimetro();
    float area();
    bool quadrado();
};

//Questao 10
float Retangulo::perimetro() {
    return(this->p1.distancia(this->p2)+this->p2.distancia(this->p3)+this->p3.distancia(this->p4)+this->p4.distancia(this->p1));
}

//Questao 11
float Retangulo::area() {
    return(this->p1.distancia(this->p2)*this->p2.distancia(this->p3));
}

//Questao 12
bool Retangulo::quadrado() {
    if ((this->p1.distancia(this->p2) == this->p2.distancia(this->p3))){
        return(true);
    }
    return(false);
}

//Parte IV
//Questao 13
struct Circunferencia {
    Ponto centro;
    float raio;

    float perimetro();
    float area();
    bool contem(Ponto& p);
    bool contem(Triangulo& t);
    bool contem(Retangulo& r);
    bool pertence(Ponto& p);
    bool circunscrita(Triangulo& t);
    bool circunscrita(Retangulo& r);
};

//Questao 14
float Circunferencia::perimetro() {
    return(2*3.14*this->raio);
}

//Questao 15
float Circunferencia::area() {
    return(3.14*this->raio*this->raio);
}

//Questao 16
bool Circunferencia::contem(Ponto& p) {
    if ((p.distancia(this->centro)) <= this->raio){
        return (true);
    }
    return (false);
}

//Questao 17
bool Circunferencia::contem(Triangulo& t) {
    if(((t.p1.distancia(this->centro)) <= this->raio) && ((t.p2.distancia(this->centro)) <= this->raio) && ((t.p3.distancia(this->centro)) <= this->raio)){
        return (true);
    }
    return (false);
}

//Questao 18
bool Circunferencia::contem(Retangulo& r) {
    if(((r.p1.distancia(this->centro)) <= this->raio) && ((r.p2.distancia(this->centro)) <= this->raio) && ((r.p3.distancia(this->centro)) <= this->raio) && ((r.p4.distancia(this->centro)) <= this->raio)){
        return (true);
    }
    return (false);
}

//Questao 19
bool Circunferencia::pertence(Ponto& p) {
    if ((p.distancia(this->centro)) == this->raio){
        return (true);
    }
    return (false);
}

//Questao 20
bool Circunferencia::circunscrita(Triangulo& t) {
    if(((t.p1.distancia(this->centro)) == this->raio) && ((t.p2.distancia(this->centro)) == this->raio) && ((t.p3.distancia(this->centro)) == this->raio)){
        return (true);
    }
    return (false);
}

//Questao 21
bool Circunferencia::circunscrita(Retangulo& r) {
    if(((r.p1.distancia(this->centro)) == this->raio) && ((r.p2.distancia(this->centro)) == this->raio) && ((r.p3.distancia(this->centro)) == this->raio) && ((r.p4.distancia(this->centro)) == this->raio)){
        return (true);
    }
    return (false);
}

int main() {

    printf("Parte I:\n");
    Ponto p1, p2;
    p1.atribuir(2,3);
    p2.atribuir(0,3);
    printf("A distancia entre p1 e p2 eh: %.1f\n", p1.distancia(p2));

    printf("\nParte II:\n");
    Triangulo t, outroT;
    t.p1.atribuir(0.2,0);
    t.p2.atribuir(0,0.2);
    t.p3.atribuir(0,0.4);
    t.pmedio.atribuir((p1.x + p2.x)/2,(p1.y + p2.y)/2);
    outroT.p1.atribuir(2,4);
    outroT.p2.atribuir(2,6);
    outroT.p3.atribuir(4,6);

    printf("O perimetro do triangulo eh: %.1f\n", t.perimetro());
    printf("A area do triangulo eh: %.1f\n", t.area());
    printf("O triangulo eh equilatero: %d\n", t.equilatero());
    printf("O triangulo eh semelhante: %d\n", t.semelhante(outroT));

    printf("\nParte III:\n");
    Retangulo r;
    r.p1.atribuir(1,0);
    r.p2.atribuir(-1,0);
    r.p3.atribuir(0,1);
    r.p4.atribuir(0,-1);

    printf("O perimetro do retangulo eh: %.1f\n", r.perimetro());
    printf("A area do retangulo eh: %.1f\n", r.area());
    printf("O retangulo eh quadrado: %d\n", r.quadrado());

    printf("\nParte IV:\n");
    Circunferencia c;
    c.centro.atribuir(0,0);
    c.raio=1;
    Ponto p;
    p.atribuir(1,0);
    printf("O perimetro da circunferencia eh: %.2f\n", c.perimetro());
    printf("A area da circunferencia eh: %.2f\n", c.area());
    printf("O ponto (%.0f,%.0f) esta contido na circunferencia: %d\n", p.x, p.y, c.contem(p));
    printf("O triangulo esta contido na circunferencia: %d\n", c.contem(t));
    printf("O retangulo esta contido na circunferencia: %d\n", c.contem(r));
    printf("O ponto (%.0f,%.0f) pertence a circunferencia: %d\n", p.x, p.y, c.contem(p));
    printf("O triangulo esta circunscrito a circunferencia: %d\n", c.circunscrita(t));
    printf("O retangulo esta circunscrito a circunferencia: %d\n", c.circunscrita(r));

    return 0;
}
