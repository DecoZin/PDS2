#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

#include "Estoque.hpp"

void Estoque::add_mercadoria(const std::string& mercadoria, unsigned int qtd) 
{
  // TODO

  if(itens.count(mercadoria) != 0)
  {
    std::map<std::string, int>::iterator it;
    it = itens.find(mercadoria);
    if(it->first == mercadoria)
    {
      it->second += qtd;
    }
  }
  else
  {
    itens.insert(std::pair<std::string, int>(mercadoria, qtd));
  }
}

void Estoque::sub_mercadoria(const std::string& mercadoria, unsigned int qtd) 
{
  // TODO

  if(itens.count(mercadoria) != 0)
  {
    std::map<std::string, int>::iterator it;
    it = itens.find(mercadoria);
    if(it->first == mercadoria)
    {
      if(it->second < qtd)
      {
        std::cout << mercadoria << " insuficiente" << std::endl;
      }
      else
      {
        it->second -= qtd;
      }
    }
  }
  else
  {
    std::cout << mercadoria << " inexistente" << std::endl;
  }
}

unsigned int Estoque::get_qtd(const std::string& mercadoria) const 
{
  // TODO

  if(itens.count(mercadoria) != 0)
  {
    std::map<std::string, int>::const_iterator it;
    it = itens.find(mercadoria);
    if(it->first == mercadoria)
    {
      return it->second;
    }
  }
  return 0;
}

void Estoque::imprime_estoque() const 
{
  // TODO

  std::vector<std::string> mercadoria;
  std::map<std::string, int>::const_iterator it_map;
  std::map<std::string, int> copia_em_ordem;
  for(it_map = this->itens.begin(); it_map != this->itens.end(); ++it_map)
  {
    mercadoria.push_back(it_map->first);
  }

  std::sort(mercadoria.begin(), mercadoria.end());

  for(int i=0 ; i<mercadoria.size(); i++)
  {
    for(it_map = this->itens.begin(); it_map != this->itens.end(); ++it_map)
    {
      if(mercadoria[i] == it_map->first)
      {
        copia_em_ordem.insert(std::pair<std::string, int>(it_map->first, it_map->second));
      }
    }
  }

  for(it_map = copia_em_ordem.begin(); it_map != copia_em_ordem.end(); ++it_map)
    {
      std::cout << it_map->first << ", " << it_map->second << std::endl;
    }
}

Estoque& Estoque::operator += (const Estoque& rhs) 
{
  // TODO

  std::map<std::string, int>::const_iterator it;
  for(it = rhs.itens.begin(); it != rhs.itens.end(); ++it)
  {
    this->add_mercadoria(it->first, it->second);
  }
  return *this;
}

Estoque& Estoque::operator -= (const Estoque& rhs) 
{
  // TODO

  std::map<std::string, int>::const_iterator it;
  for(it = rhs.itens.begin(); it != rhs.itens.end(); ++it)
  {
    this->sub_mercadoria(it->first, it->second);
  }
  return *this;
}

bool operator < (Estoque& lhs, Estoque& rhs) 
{
  // TODO

  int iguais = 0;
  int menor = 0;
  std::map<std::string, int>::iterator it1;
  std::map<std::string, int>::iterator it2;
  for(it1 = lhs.itens.begin(); it1 != lhs.itens.end(); ++it1)
  {
    iguais += rhs.itens.count(it1->first);
  }
  if(iguais == lhs.itens.size())
  {
    for(it1 = lhs.itens.begin(); it1 != lhs.itens.end(); ++it1)
    {
      for(it2 = rhs.itens.begin(); it2 != rhs.itens.end(); ++it2)
      {
        if(it1->first == it2->first)
        {
          if(it1->second < it2->second)
          {
            menor = menor + 0;
          }
          else
          {
            menor = menor + 1;
          }
        }
      }
    }
  }
  if(menor = 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool operator > (Estoque& lhs, Estoque& rhs) 
{
  // TODO

  if(lhs < rhs)
  {
    return false;
  }
  else
  {
    return true;
  }
}