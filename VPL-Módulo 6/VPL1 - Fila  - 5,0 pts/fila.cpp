#include "fila.h"

struct No {
  int chave;
  No* proximo;
};

Fila::Fila() {
  // TODO
  this->primeiro_ = nullptr;
  this->ultimo_ = nullptr;

}

void Fila::Inserir(int k) {
  // TODO

  No* novo = new No;
  novo->chave = k;
  novo->proximo = nullptr;

  if(primeiro_ == nullptr)
    {
        primeiro_ = novo;
        ultimo_ = novo;
    }
    else
    {
        ultimo_->proximo = novo;
        ultimo_ = novo;
    }

}

void Fila::RemoverPrimeiro() {
  // TODO
  No* atual = primeiro_;
  No* anterior = nullptr;

  primeiro_ = atual->proximo;
  delete atual;

  anterior = atual;
  atual = atual->proximo;

}

int Fila::primeiro() const {
  // TODO
  if(this->tamanho() == 0) throw Fila::ExcecaoFilaVazia();

  return this->primeiro_->chave; 

}

int Fila::ultimo() const {
  // TODO
  if(this->tamanho() == 0) throw Fila::ExcecaoFilaVazia();

  return this->ultimo_->chave; 

}

int Fila::tamanho() const {
  // TODO
  int n = 1;
  No* aux = this->primeiro_;
  if(aux == nullptr)
  {
    return 0;
  }
  else
  {
  for(n; aux != nullptr; n++)
  {
    aux = aux->proximo;
  }
  
  return n; 
  }

}