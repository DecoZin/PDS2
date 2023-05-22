#include "Nave.hpp"
#include<iostream>
#include<cmath>

Nave::Nave(Ponto2D Posicao , double Forca)
{
    posicao.x = Posicao.x;
    posicao.y = Posicao.y;
    forca = Forca;
}

void Nave::mover(double Mx,double My)
{
    posicao.x = posicao.x + Mx;
    posicao.y = posicao.y + My;
}

double Nave::calcular_distancia(Nave* nave)
{
    double dex = nave->posicao.x - this->posicao.x;
    double dey = nave->posicao.y - this->posicao.y;
    return sqrt(dex*dex + dey*dey);
}

Nave* Nave::determinar_nave_mais_proxima(Nave** naves,int n)
{
    Nave** ordem_n_m_p = naves;
    Nave* aux;

    for(int i=0 ; i<n-1 ;i++)
    {
        for(int j=i+1 ; j<n ;j++)
        {
            aux = ordem_n_m_p[i];
            if(calcular_distancia(ordem_n_m_p[j])<calcular_distancia(ordem_n_m_p[i]))
            {
                ordem_n_m_p[i] = ordem_n_m_p[j];
                ordem_n_m_p[j] = aux;
            }
        }
    }
    return ordem_n_m_p[1];
}

void Nave::atacar(Nave** naves,int n)
{
    Nave* atacante;

    for( int i=0; i<n; i++)
    {
        if(calcular_distancia(naves[i]) == 0)
        {
        atacante = naves[i];
        }
        
    }

    Nave* nave_atacada = determinar_nave_mais_proxima(naves,n);

    double d = calcular_distancia(nave_atacada);
    double dano = (100/d)*(atacante->forca);

    if(dano>30)
    {
        dano = 30;
    }
    nave_atacada->energia = nave_atacada->energia-dano;

    if(nave_atacada->energia<50)
    {
        std::cout << "Energia baixa!" << std::endl;
    }
}

void Nave::imprimir_status()
{
    std::cout << posicao.x << " " << posicao.y << " " << energia << std::endl;
}