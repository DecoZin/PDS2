#include"Processo.hpp"

Processo::Processo(int id, string nome, int prioridade)
{
    this->_id = id;
    this->_nome = nome;
    this->_prioridade = prioridade;
}

void Processo::imprimir_dados()
{
    cout << this->_id << " " << this->_nome << " " << this->_prioridade << endl;
}