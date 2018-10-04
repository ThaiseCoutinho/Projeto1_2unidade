#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

/*
 * A classe Poligono é utilizada para armazenar e fazer operações com um vetor
 * de pontos Point, esse vetor irá representar um poligono. Seus pontos
 * serão inicializados em sentido anti-horário
*/

class Poligono
{
    int numeroPontos;
/*
 * Quantidade de pontos que formam o polígono.
*/
    Point poligono[100];
/*
 * poligono é o vetor que irá guardar os pontos, e terá o máximo de 100 pontos
*/

public:
    Poligono();
/*
 * Poligono nesse construtor, a variável numeroPontos pe inicializada com 0, indicando a
 * criação de polígono vazio.
*/
    void addponto(float _x, float _y);
/*
 * Método que adiciona um ponto ao poligono na posição númeroPontos.
 * _x Valor que corresponde a coordenada X do ponto que está sendo adicionado.
 * _y Valor que corresponde a coordenada Y do ponto que está sendo adicionado.
 *
*/
    int getNumPontos(void);
/*
 * Método que retorna o número de pontos que o polígono possui,
 * será retornado um número inteiro.
*/
    void imprime(void);
/*
 * Método que mostra o polígono para o usuário no formato (x1,y1) --> (x2,y2)...
*/
    float area(void);
/*
 * Método que calcula a área delimitada pelas arestas do poligono, será
 * retornado um número float.
*/
    void translada (float a, float b);
/*
 * Método que translada todos os pontos do polígono em X e Y de acordo com os parâmetros
 * fornecidos.
 * a Valor do deslocamento no eixo X.
 * b Valor do deslocamento no eixo Y.
*/
    void rotaciona(Point p1, float ang);
/*
 * Método que rotaciona todos os poligonos em torno de um ponto fornecido em teta graus também fornescido.
 * p1 ponto que será o eixo da rotação.
 * ang ângulo da rotação.
*/

};

#endif // POLIGONO_H
