#ifndef PONTO2D_H
#define PONTO2D_H

struct Ponto2D
{
    double x;
    double y;

    Ponto2D(double,double);
    Ponto2D();
    double calcular_distancia(Ponto2D* ponto);
};

#endif