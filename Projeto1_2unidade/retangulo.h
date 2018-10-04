#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/*
 * A classe Retangulo manuseia um tipo específico de poligono (retangulo).poligono
*/

class Retangulo: public Poligono
{
public:
    Retangulo();
/*
 * Contrutor padrão para uma chamda sem parâmetros que cria um retangulo sem nenhum ponto.
 *
*/
    Retangulo(float x, float y, float largura, float altura);
/*
 * Construtor onde o retangulo é inicializado de acordo com oas parâmetros fornecidos.
 * Será formado por 4 pontos iniciais no sentido ant-horário.
 * Posição X do primeiro ponto (superior esquerda), referencial para os demais pontos.
 * Posição y do primeiro ponto (superior esqueda), refencial para os demais pontos.
 * largura variação no eixo x.
 * altura variação no eixo y.
*/
};

#endif // RETANGULO_H
