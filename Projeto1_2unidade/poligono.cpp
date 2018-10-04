#include "poligono.h"
#include <iostream>
#include <cmath>

using namespace std;
//N vétices posições do polígono
Poligono::Poligono(void)
{
    numeroPontos=0;
}
//Número de pontos que tem no polígono
int Poligono::getNumPontos(void)
{
    return numeroPontos;
}
// Adciona um ponto ao polígono na posição numeropontos
void Poligono::addponto(float _x, float _y)
{
    poligono[numeroPontos].setXY(_x,_y);
    numeroPontos++;
}
//Calcula a área delimitada pelas arestas do polígono
float Poligono::area(void)
{

    int i;
    float subtracao, soma;
    soma= poligono[numeroPontos-1].getX()*poligono[0].getY();
    subtracao= poligono[numeroPontos-1].getY()*poligono[0].getX();
    for(i=0;i<numeroPontos-1;i++)
    {
        soma += poligono[i].getX()*poligono[i+1].getY();
        subtracao= poligono[i].getY()*poligono[i+1].getX();
    }
    return (abs(soma-subtracao)/2);
}
//Translada todos os pontos do polígono.
void Poligono::translada(float a, float b)
{
    int i;
    for(i=0;i<numeroPontos;i++)
    {
        poligono[i].translada(a,b);
    }
}
//Rotaciona o polígono em teta graus, em torno de um ponto fornecido.
void Poligono::rotaciona(Point p1, float angulo)
{
    float x, y, x1, y1;
    int i;
    for(i=0;i<numeroPontos;i++)
    {
        x=p1.getX();
        y=p1.getY();
        poligono[i].translada(x*(-1),y*(-1));
        x1=poligono[i].getX()*cos(angulo) - poligono[i].getY()*sin(angulo);
        y1=poligono[i].getY()*cos(angulo) - poligono[i].getX()*sin(angulo);

        poligono[i].setXY(x1,y1);
        poligono[i].translada(x,y);
    }
}
// Mostra o polígono no formato (x1,y1)--> (x2,y2).
void Poligono::imprime(void)
{
    int i;
    if(numeroPontos==0)
    {
        cout<<"Não existe vertices" <<endl;
    }
    for(i=0;i<numeroPontos;i++)
    {
        poligono[i].imprime();
        if(i<numeroPontos-1)
            cout <<" --> ";
        else
            cout << endl;
    }
}



