#include <regex>
#include <math.h>
#include <string>
#include <vector>
#include <sstream>

#include "LineProcessor.hpp"

void LinePrinter::processaLinha(const std::string &str) 
{
  std::cout << str << std::endl;
  
}

bool ContadorPopRural::linhaValida(const std::string &str) const 
{
  // Neste exemplo usaremos expressoes regulares para verificar se uma linha
  // eh valida ou nao.
  //
  // Esta expressao regular eh formada por cinco partes. Cada uma dessas
  // partes eh um dos tres tipos de padrao regular abaixo:
  //
  // \\w+ eh qualquer palavra com um ou mais digitos, letras e sublinhas (_)
  // \\s* eh qualquer sequencia de zero ou mais espacos (inclui tab)
  // \\d+ eh qualquer sequencia de um ou mais digitos
  std::regex regularExpr("\\w+\\s*\\d+\\s*\\d+");

  // A funcao regex_match vai retornar verdadeiro se a string str casa-se com
  // a expressao regular que acabamos de criar:

  return std::regex_match(str, regularExpr);
}

void ContadorPopRural::processaLinha(const std::string &str) 
{
  //
  // Em geral eh mais facil ler dados de uma string se a string eh transformada
  // em um objeto do tipo stringstream:
  std::stringstream ss(str);
  //
  // Iremos ler os dados da string nestas tres variaveis abaixo:
  std::string nomePais;
  unsigned populacao, percUrbana;
  //
  // Como sabemos que a linha contem string int int, podemos fazer a leitura
  // facilmente usando o operador de streaming:
  ss >> nomePais >> populacao >> percUrbana;
  //
  // Note que precisamos arredondar o valor que serah impresso. O arredondamento
  // serah feito via a funcao floor. Ou seja, decimais serao sempre
  // arredondados para baixo:
  unsigned popRural = floor(populacao - (populacao * (percUrbana/100.0)));
  //
  // Uma vez encontrados os valores que precisam ser impressos, seguimos o
  // modelo do enunciado do exercicio:
  std::cout << popRural << " pessoas vivem no campo no " << nomePais << std::endl;

}

bool ContadorNumNaturais::linhaValida(const std::string &str) const 
{
  // TODO: Implemente este metodo

  std::regex r_ex( "(\\s*(?:\\d\\s*)*)" );

  return std::regex_match(str, r_ex);
}

void ContadorNumNaturais::processaLinha(const std::string &str) 
{
  // TODO: Implemente este metodo:

  std::stringstream in_(str);
  int num = 0;
  int soma = 0;
  while(in_>>num) 
  {
    soma = soma + num;
  }
  std::cout << soma << std::endl;

}

bool LeitorDeFutebol::linhaValida(const std::string &str) const 
{
  // TODO: Implemente este metodo

  std::regex r_ex( " *[A-Za-z]+ +[0-9]+ +[A-Za-z]+ +[0-9]+" );

  return std::regex_match(str, r_ex);
}

void LeitorDeFutebol::processaLinha(const std::string &str) 
{
  // TODO: Implemente este metodo:

  int a;
  int b;

  std::string A;
  std::string B;
  std::stringstream in(str); 

  in>>A;
  in>>B;
  
  in>>a;
  in>>b;

  if(a == b)
  {
    std::cout << "Empate" << std::endl;
  }
  else
  {
    std::cout << "Vencedor: " << ((a > b) ? A : B) << std::endl;
  }

}

void ContadorDePalavras::processaLinha(const std::string &str) 
{
  // TODO: Implemente este metodo:

  int a = 0;
  std::stringstream in_(str);
  std::string string;

  while(in_>>string) 
  {
    a++;
  }  

  std::cout << a << std::endl;
}

bool InversorDeFrases::linhaValida(const std::string &str) const 
{
  // TODO: Implemente este metodo

  std::regex r_ex( "([a-zA-Z](?:\\s*[a-zA-Z])*)" );
  return std::regex_match(str, r_ex);

}

void InversorDeFrases::processaLinha(const std::string &str) 
{
  // TODO: Implemente este metodo:

  std::vector<std::string> fra_;
  std::string inv_f;
  std::stringstream in_(str);

  while(in_ >> inv_f)
  {
    fra_.push_back(inv_f);
  }
    
  for(int i=fra_.size()-1 ; i >= 0;i--)
  {
    std::cout << fra_[i] << " ";
  }
  std::cout << std::endl;

}

bool EscritorDeDatas::linhaValida(const std::string &str) const 
{
  std::string dateFormat = "\\s*\\d\\d?/\\d\\d?/\\d{4}";
  // TODO: Implemente este metodo
  // Note que você pode usar uma expressao regular como:
  // "\\s*\\d\\d?/\\d\\d?/\\d{4}" para saber se a linha eh valida:

  return std::regex_match(str,std::regex( "\\s*\\d\\d?/\\d\\d?/\\d{4}" ));

}

void EscritorDeDatas::processaLinha(const std::string &str) 
{
  // TODO: Implemente este metodo:
  // Lembre-se que as iniciais dos meses sao:
  // "Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out",
  // "Nov", e "Dez".
  std::string mes;
  std::stringstream in_(str); 
  
  getline(in_,mes,'/'); getline(in_,mes,'/');
  int numero_mes = stoi(mes);

  if(numero_mes == 1)
  {
    mes = "Jan";
  }
  
  if(numero_mes == 2)
  {
    mes = "Fev";
  }
    
  
  if(numero_mes == 3)
  {
    mes = "Mar";
  }
  
  if(numero_mes == 4)
  {
    mes = "Abr";
  }
    
  if(numero_mes == 5)
  {
    mes = "Mai";
  }

  if(numero_mes == 6)
  {
    mes = "Jun";
  }
    
  if(numero_mes == 7)
  {
    mes = "Jul";
  }
    
  if(numero_mes == 8)
  {
    mes = "Ago";
  }
    
  if(numero_mes == 9)
  {
    mes = "Set";
  }

  if(numero_mes == 10)
  {
    mes = "Out";
  }
    
  if(numero_mes == 11)
  {
    mes = "Nov";
  }
    
  if(numero_mes == 12)
  {
    mes = "Dez";
  }

  std::cout << mes << std::endl;

  }