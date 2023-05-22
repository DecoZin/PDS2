#ifndef LISTAPROCESSO_H
#define LISTAPROCESSO_H
#include"Processo.hpp"

struct Node
{
    Processo *proc;
    Node *proximo;
};
struct ListaProcesso
{
    Node *ultimo = nullptr;
    ListaProcesso *primeiro = nullptr;

    void adicionar_processo(Processo *proc);
    Processo* remover_processo_maior_prioridade();
    Processo* remover_processo_menor_prioridade();
    Processo* remover_processo_por_id(int id);
    void imprimir_lista();
};

#endif