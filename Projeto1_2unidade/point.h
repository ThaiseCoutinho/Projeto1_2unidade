#ifndef POINT_H
#define POINT_H

/*
    A classe Point realiza operações com pontos do tipo float
*/
class Point
{
private:
    float x;
    float y;
public:
    Point();
/*
    Point é o construtor da classe Point.
    Caso não seja informado nenhuma coordenada, o construtos
    cria um ponto com as coordenadas (0,0).

*/
    Point(float _x, float _y);
/*
 * Point é a sobrecarga do construtor.
 * Recebe como paramentros as coordenadas x e y.
*/
    void setX(float _x);
/*
 * Método que armazena a coordenada x.
 */
    void setY(float _y);
/*
 * Método que armazena a coordenada y.
 */
    void setXY(float _x, float _y);
/*
 * Método que armazena as coordenada x e y.
 */
    float getX(void);
/*
 * Métdo que recupera a coordenada x.
 * Retorna a coordenada x.
*/
    float getY(void);
/*
 * Métdo que recupera a coordenada y.
 * Retorna a coordenada y.
*/
    Point add(Point p1);
 /*
  * Método que adiciona as coordenadas de um ponto a outro ponto conhecido.
  * Adiciona as coordenadas x e y de um ponto com as de outro ponto.
  * x1 e y1 fornecido, armazenando o resultado (x+x1, y+y1) nas coordenadas de um novo ponto.
  * P1, ponto que será somado.
  * Retorna o novo ponto resulatdo da soma entre dois pontos.

*/
    Point sub(Point p1);
 /*
  * Método que subtrai as coordenadas de um ponto a outro ponto conhecido.
  * Subtrai as coordenadas x e y de um ponto com as de outro ponto.
  * x1 e y1 fornecido, armazenando o resultado (x-x1, y-y1) nas coordenadas de um novo ponto.
  * P1, ponto que será subtraído.
  * Retorna o novo ponto resultado da subtração entre dois pontos.

*/
    float norma(void);
/*
 * Método que calcula distância de um ponto até a origem do sistema de coordenadas.
 * Retorna o resultado da norma.
*/
    void translada(float a, float b);
/*
 * Método que translada os pontos x e y em a e b unidades.
*/
    void imprime(void);
/*
 * Método que imprime o ponto na forma (xy).
*/

};

#endif // POINT_H
