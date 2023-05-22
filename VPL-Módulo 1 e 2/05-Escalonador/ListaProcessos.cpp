#include"ListaProcessos.hpp"

void ListaProcesso::adicionar_processo(Processo* proc)
{
    Node* novo_p = new Node;

    novo_p->proc = proc;
    novo_p->proximo = nullptr;

    if(primeiro == nullptr)
    {
        primeiro = novo_p;
        ultimo = novo_p;
    }
    else
    {
        Node *atual = primeiro;
        Node *anterior = nullptr;

        while(atual != nullptr && novo_p->proc->_prioridade <= atual->proc->_prioridade)
        {
            anterior = atual;
            atual = atual->proximo;
        }
        if (atual == nullptr)
        {
            anterior->proximo = novo_p;
            ultimo = novo_p;
        }
        else if (atual == primeiro)
        {
            novo_p->proximo = primeiro;
            primeiro = novo_p;
        }
        else if (novo_p->processo->_prioridade > atual->processo->_prioridade)
        {
            novo_p->proximo = atual;
            anterior->proximo = novo_p;
        }
    }
}

Processo* ListaProcesso::remover_processo_maior_prioridade()
{
    Node *atual = primeiro;
    primeiro = atual->proximo;
    atual->proximo = nullptr;

    return atual->proc;
}

Processo* ListaProcesso::remover_processo_menor_prioridade()
{
    Node *atual = primeiro;

    while(atual->proximo != ultimo)
    {
        atual = atual->proximo;
    }
    ultimo = atual;
    atual = atual->proximo;
    ultimo->proximo = nullptr;

    return atual->proc;
}

Processo* ListaProcesso::remover_processo_por_id(int id)
{
    Node *ant_do_removido = nullptr;
    Node *removido = primeiro;

    while(removido != nullptr && removido->proc->_id != id)
    {
        ant_do_removido = removido;
        removido = removido->proximo;
    }
    if(removido->proc->_id == id)
    {
    ant_do_removido->proximo = removido->proximo;
    removido->proximo = nullptr;

    return removido->proc;
    }
    else if(removido == nullptr)
    {
        return nullptr;
    }
}

void ListaProcesso::imprimir_lista()
{
    Node *aux = primeiro;

    while(aux != nullptr)
    {
        aux->proc->imprimir_dadosimprimir_dados();
        aux = aux->proximo;
    }
}