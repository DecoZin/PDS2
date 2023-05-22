#ifndef NAVE_H
#define NAVE_H
#include "Ponto2D.hpp"


struct Nave
{
    Ponto2D posicao;
    double forca = 1;
    double energia = 100; 

    Nave(Ponto2D posicao,double forca);
    void mover(double ,double );
    double calcular_distancia(Nave* );
    Nave* determinar_nave_mais_proxima(Nave** ,int );
    void atacar(Nave** ,int );
    void imprimir_status();
};

#endif