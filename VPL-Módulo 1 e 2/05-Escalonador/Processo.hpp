#ifndef PROCESSO_H
#define PROCESSO_H

#include<iostream>
using namespace std;

struct Processo
{
    int _id;
    string _nome;
    int _prioridade;

    Processo(int id, string nome, int prioridade);
    void imprimir_dados();
};

#endif