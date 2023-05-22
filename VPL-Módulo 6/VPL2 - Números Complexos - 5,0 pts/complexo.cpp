// Copyright 2018 Universidade Federal de Minas Gerais (UFMG)

#include "complexo.h"

#include <cmath>

Complexo::Complexo() : Complexo(0, 0) {
}

Complexo::Complexo(double a) : Complexo(a, 0) {
}

Complexo::Complexo(double a, double b) {
  this->complexo_ = b;
  this->real_ = a;
}

double Complexo::real() const {
  return this->real_;
}

double Complexo::imag() const {
  return this->complexo_;
}

bool Complexo::operator==(Complexo x) const {
  // Precisão numérica utilizda.    
  static const double epsilon = 1E-6;

  // Quando o módulo é zero, não importa o valor do argumento.
  if(this->complexo_ == x.complexo_ && this->real_ == x.real_)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void Complexo::operator=(Complexo x) {
  this->complexo_ = x.complexo_;
  this->real_ = x.real_;
} 

double Complexo::modulo() const {
  double mod_ = sqrt((this->real_*this->real_)+(this->complexo_*this->complexo_));
  return mod_;
}

Complexo Complexo::conjugado() const {
  Complexo c;
  c.real_ = this->real_;
  c.complexo_ = -this->complexo_;
  return c;
}

Complexo Complexo::operator-() const {
  Complexo c;
  c.real_= -this->real_;
  c.complexo_ = -this->complexo_;
  return c;
}

Complexo Complexo::inverso() const {
  Complexo i;
  i.real_ = this->real_/((this->real_*this->real_)+(this->complexo_*this->complexo_));
  i.complexo_ = -this->complexo_/((this->real_*this->real_)+(this->complexo_*this->complexo_));
  return i;
}

Complexo Complexo::operator+(Complexo y) const {
  Complexo s;
  s.real_ = this->real_ + y.real_;
  s.complexo_ = this->complexo_ + y.complexo_;
  return s;
}

Complexo Complexo::operator-(Complexo y) const {
  return (*this) + -y;
}

Complexo Complexo::operator*(Complexo y) const {
  Complexo p;
  p.real_ = this->real_*y.real_ - this->complexo_*y.complexo_;
  p.complexo_ = this->real_*y.complexo_ + this->complexo_*y.real_;
  return p;
}

Complexo Complexo::operator/(Complexo y) const {
  return (*this) * y.inverso();
}
