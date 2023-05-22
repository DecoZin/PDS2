#include "pizza.hpp"

std::string Pizza::descricao() const 
{
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada da pizza.
   *
   * Exemplos:
   * 2X Pizza Calabresa, 4 pedacos e borda recheada.
   * 2X Pizza Calabresa, 4 pedacos sem borda recheada.
   */
  std::string s1 = "X Pizza ";
  std::string s2 = ", ";
  std::string s3_com_borda = " pedacos e borda recheada.";
  std::string s3_sem_borda = " pedacos sem borda recheada.";

  std::string quantidade(std::to_string(this->m_qtd));
  std::string pedacos(std::to_string(this->_pedacos));

  std::string Descricao;
  if(this->_borda_recheada == true)
  {
    Descricao = quantidade + s1 + this->_sabor + s2 + pedacos + s3_com_borda;
  }
  else
  {
    Descricao = quantidade + s1 + this->_sabor + s2 + pedacos + s3_sem_borda;
  }

  return Descricao;
}

Pizza::Pizza(const std::string& sabor, int pedacos, bool borda_recheada, int qtd, float valor_unitario) 
{
  // TODO: Implemente este metodo.
  this->_sabor = sabor;
  this->_pedacos = pedacos;
  this->_borda_recheada = borda_recheada;
  this->m_qtd = qtd;
  this->m_valor_unitario = valor_unitario;
}