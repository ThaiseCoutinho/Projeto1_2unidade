#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;
Point::Point()
{
    x=0;
    y=0;
}
Point::Point(float _x, float _y)
{
    x=_x;
    y=_y;
}
//Define valor da coordenada x do ponto.
void Point::setX(float _x)
{
    x=_x;
}
//Define o valor da coordenada y do ponto.
void Point::setY(float _y)
{
    y=_y;
}
//Define em uma mesma função, os valores das coordenadas x e y.
void Point::setXY(float _x, float _y)
{
    x=_x;
    y=_y;
}
//Recupera o valor da coordenada x do ponto.
float Point::getX(void)
{
    return x;
}
//Recupera o valor da coordenada y do ponto.
float Point::getY(void)
{
    return y;
}
//Subtrai as coordenadas (x,y) do ponto com as coordenadas de um ponto P1(x1,y1) e retorna.
Point Point::sub(Point p1)
{
    Point ret;
    ret.x=x-p1.x;
    ret.y=y-p1.y;
    return ret;
}
//Adciona as coordenadas (x,y) do ponto com as coordenadas de um ponto P1(x1,y1) e retorna.
Point Point::add(Point p1)
{
    Point ret;
    ret.x=x+p1.x;
    ret.y=y+p1.y;
    return ret;
}
//Calcula a distância do ponto até a oringem.
float Point::norma(void)
{
    return sqrt((x*x)+(y*y));
}
//Translada o ponto (x,y) em (+a,+b).
void Point::translada(float a, float b)
{
    x=x+a;
    y=y+b;
}
//Imprime o ponto.
void Point::imprime(void)
{
    cout<<"("<<x<<","<<y<<")";
}
