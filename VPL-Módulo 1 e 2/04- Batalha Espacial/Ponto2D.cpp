#include<cmath>
#include "Ponto2D.hpp"

Ponto2D::Ponto2D(double _x, double _y)
{
    x = _x;
    y = _y;
}

Ponto2D::Ponto2D(){
}

double Ponto2D::calcular_distancia(Ponto2D* ponto)
{
    double dx = ponto->x - this->x;
    double dy = ponto->y - this->y;
    
    return sqrt(dx*dx + dy*dy);
}