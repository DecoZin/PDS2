#include "japonesa.hpp"

std::string Japonesa::descricao() const 
{
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada da comida
   * japonesa.
   *
   * Exemplos:
   * 1X Comida japonesa - Combo 1, 4 sushis, 5 temakis e 6 hots.
   * 1X Comida japonesa - Combo 2, 5 sushis, 6 temakis e 8 hots.
   */
  std::string s1 = "X Comida japonesa -  ";
  std::string s2 = ", ";
  std::string s3 = " sushis, ";
  std::string s4 = " temakis e ";
  std::string s5 = " hots.";

  std::string quantidade(std::to_string(this->m_qtd));
  std::string sushis(std::to_string(this->_sushi));
  std::string temakis(std::to_string(this->_temaki));
  std::string hots(std::to_string(this->_hots));


  std::string Descricao = quantidade + s1 + _combinado + s2 + sushis + s3 + temakis + s4 + hots + s5 ;
   
  return Descricao;
}

Japonesa::Japonesa(const std::string& combinado, int sushis, int temakis, int hots, int qtd, float valor_unitario) 
{
  // TODO: Implemente este metodo.
  this->_combinado = combinado;
  this->_sushi = sushis;
  this->_temaki = temakis;
  this->_hots = hots;
  this->m_qtd = qtd;
  this->m_valor_unitario = valor_unitario;
}