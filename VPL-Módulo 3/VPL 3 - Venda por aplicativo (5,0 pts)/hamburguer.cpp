#include "hamburguer.hpp"

std::string Hamburguer::descricao() const 
{
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada do Hamburguer.
   *
   * Exemplos:
   * 1X Hamburguer X-tudo artesanal.
   * 1X Hamburguer X-tudo simples.
   */
  std::string s1 = "X Hamburguer ";
  std::string s2_simples = " simples.";
  std::string s2_artesanal = " artesanal.";

  std::string quantidade(std::to_string(this->m_qtd));

  std::string Descricao;
  if(this->_artesanal == true)
  {
    Descricao = quantidade + s1 + this->_tipo + s2_artesanal;
  }
  else
  {
    Descricao = quantidade + s1 + this->_tipo + s2_simples;
  }

  return Descricao;
}

Hamburguer::Hamburguer(const std::string& tipo, bool artesanal, int qtd, float valor_unitario) 
{
  // TODO: Implemente este metodo.
  this->_tipo = tipo;
  this->_artesanal = artesanal;
  this->m_qtd = qtd;
  this->m_valor_unitario = valor_unitario;
}