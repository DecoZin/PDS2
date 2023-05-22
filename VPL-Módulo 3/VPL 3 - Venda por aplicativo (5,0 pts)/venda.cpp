#include "venda.hpp"

#include <iomanip>

Venda::~Venda() {
  // TODO: Implemente este metodo
  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_pedidos
   */
  m_pedidos.clear();
}

void Venda::adicionaPedido(Pedido* p) {
  // TODO: Implemente este metodo
  m_pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const {
  // TODO: Implemente este metodo
  /**
   * Aqui voce tem que percorrer a lista de todos os pedidos e imprimir o resumo
   * de cada um. Por ultimo, devera ser exibido o total de venda e a quantidade
   * de pedidos processados.
   */
  float total = 0;
  for(std::list<Pedido* >::const_iterator it = m_pedidos.begin(); it != m_pedidos.end(); ++it)
  {
    total = total + (*it)->calculaTotal();
  }

  int numero_do_pedido = 0;
  for(std::list<Pedido* >::const_iterator it = m_pedidos.begin(); it != m_pedidos.end(); ++it)
  {
    ++numero_do_pedido;
    std::cout << "Pedido " << numero_do_pedido << "\n" << (*it)->resumo() << std::endl;
  }
  std::cout << "Relatorio de Vendas\n" << "Total de vendas: R$ " << std::fixed << std::setprecision( 2 ) << total << "\nTotal de pedidos: " << numero_do_pedido << std::endl;
}