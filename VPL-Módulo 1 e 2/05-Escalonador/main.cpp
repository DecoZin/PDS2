// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_escalonador.hpp"
#include"ListaProcessos.hpp"
#include"Processo.hpp"

#include<iostream>
using namespace std;


int main()
{
    char operacao;

    ListaProcesso lista;
    Processo *proc;

    int id;
    string nome;
    int prioridade;

    while(cin >> operacao)
    {
        switch(operacao)
        {
            case 'a':
                cin >> id >> nome >> prioridade;
                proc = new Processo(id, nome, prioridade);
                lista.adicionar_processo(proc);
                
                break;
            case 'm':
                proc = lista.remover_processo_maior_prioridade();

                break;
            case 'n':
                proc = lista.remover_processo_menor_prioridade();

                break;
            case 'r':
                cin >> id;
                proc = lista.remover_processo_por_id(id);

                break;
            case 'p':
                lista.imprimir_lista();

                break;
            case 'b':
                avaliacao_basica();

                break;
        }
    }
    return 0;
}