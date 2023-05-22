#include "celular.hpp"

// TODO: Inicialize aqui sua variavel estatica. Caso tenha optado por essa
// solucao.
int Celular::codigo_geral = 0;

Celular::Celular(std::string modelo, std::string fabricante, int armazenamento, int memoria, double peso, std::string cor, int qtd, float valor) 
{
  // TODO: Implemente este metodo
  this->modelo = modelo;
  this->fabricante = fabricante;
  this->armazenamento = armazenamento;
  this->memoria = memoria;
  this->peso = peso;
  this->cor = cor;
  this->qtd = qtd;
  this->valor = valor;
  codigo_geral++;
  cod = codigo_geral;
}

bool Celular::operator<(const Celular& other) 
{
  // TODO: Implemente este metodo. 
  // Preste atencao no exemplo que a descricao utilizada na ordenacao considera
  // a fabricante antes do modelo do celular
  if(this->fabricante < other.fabricante)
  {
    return true;
  }
  else if(this->fabricante == other.fabricante)
  {
    if(this->modelo < other.modelo)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  
  return false;
}