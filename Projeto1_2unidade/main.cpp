#include <iostream>
#include <cmath>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

void TestePoint(void)
{
    Point p1(2,5), p2, p3;
    p2.setX(1);
    p2.setY(1);
    cout<<"Coordenadas ponto 3: ";
    p3.imprime();

    cout<<endl<<"Coordenadas x do ponto 1: "<<p1.getX()<<endl;
    cout<<"Coordenada y do ponto 1: "<<p1.getY()<<endl;

    cout<<"Soma de pontos: "<<endl;
    p3=p2.add(p1);
    p3.imprime();
    cout<<endl;

    cout<<"Subtração de pontos: "<<endl;
    p3=p2.sub(p1);
    p3.imprime();
    cout<<endl;

    cout<<"Norma do ponto 2: "<<p2.norma()<<endl;

    cout<<"Transladar o ponto p1= ";
    p1.imprime();
    cout<<" Transladar em 5 unidade nas coordenadas x e y"<<endl;
    p1.translada(5,5);
    p1.imprime();
    cout<<endl;
}
void TestePoligono(void)
{
    Poligono poli;
    Point p1;

    poli.addponto(2,3);
    poli.addponto(5,5);
    poli.addponto(8,3);
    poli.addponto(7,1);

    cout<<"Qtd de vertices: "<<poli.getNumPontos()<<endl<<endl;
    cout<<"Area: "<<poli.area()<<endl<<endl;
    cout<<"Transladar o poligono seguinte: ";
    poli.imprime();
    cout<<"Transladar em 1 na coordenada x e 2 na coordenada y: "<<endl;
    poli.translada(1,2);
    poli.imprime();

    cout<<endl;

    cout<<"Rotacionar "<<endl;
    cout<<"Pontos iniciais sao: "<<endl;
    poli.imprime();
    cout<<"Pontos apos rotacao: "<<endl;
    poli.rotaciona(p1,M_PI);
    poli.imprime();
}
void TesteRetangulo()
{
    Retangulo ret(5,5,5,5);
    Point p1;
    cout << "Qtd de vertices: "<< ret.getNumPontos() <<endl<<endl;
    cout << "Area: " << ret.area() << endl<<endl;
    cout << "Tranladar o retangulo seguinte ";
    ret.imprime();
    cout << "Transladar em 1 na coordernada x e 2 na coordenada y " <<endl;
    ret.translada(1,2);
    ret.imprime();

    cout << endl;

    cout << "Rotacionar"<<endl;
    cout << "Pontos iniciais sao"<<endl;
    ret.imprime();
    cout  << "Pontos apos a rotacao "<<endl;
    ret.rotaciona(p1,M_PI);
    ret.imprime();
}
Point TESTE(float x, float y, float largura, float altura)
{
    Point teste(0,0);

    float coord_x, coord_y;

    coord_y = (2*x-altura)/2;
    coord_x = (2*y+largura)/2;

    teste.setXY(coord_x,coord_y);
    return teste;
}

int main()
{
    Retangulo ret(0,0,4,3);
    Point teste;
    ret.imprime();

    teste=TESTE(0,0,3,4);
    teste.imprime();

    cout<<"Area: "<<ret.area()<<endl;

    cout<<"Transladar em (-3, 4): ";
    ret.translada(-3,4);
    ret.imprime();

    cout<<"Area com translacao: "<<ret.area()<<endl;

    cout<<"Rotacao "<<endl;
    ret.rotaciona(teste,M_PI/6);
    ret.imprime();

    return 0;

}

