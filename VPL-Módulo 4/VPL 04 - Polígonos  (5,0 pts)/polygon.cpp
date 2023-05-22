/**
 * Todas as tarefas deste exercicio devem ser feitas sobre esse arquivo.
 * Os metodos e operacoes marcados com a tag "TODO" devem ser editados.
 */

#include <iostream>
#include "polygon.h"

std::ostream& operator << (std::ostream &out, const Polygon &poly) {
  for (const Point& p: poly.limits) {
    out << " " << p;
  }
  return out;
}

bool operator == (const Polygon &lhs, const Polygon &rhs) {
  // TODO: implement this method.

  std::vector<Point> Lo = lhs;
  std::vector<Point> Ro = rhs;

  int verdade_L_R = 0;


  for(int i = 0; i < Lo.size(); i++)
  {
    if(rhs.contains(Lo[i]) == false)
    {
      verdade_L_R = 1;
    }
  }
  for(int i = 0; i < Ro.size(); i++)
  {
    if(lhs.contains(Ro[i]) == false)
    {
      verdade_L_R = 1;
    }
  }

  if(verdade_L_R == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool Point::contains(const Point& p) const {
  return p.x == this->x && p.y == this->y;
}

std::ostream& operator << (std::ostream &out, const Point &p) {
  out << "(" << p.x << ", " << p.y << ")";
  return out;
}

bool RightRectangle::contains(const Point& p) const {
  // TODO: implement this method.

  for(int i=0; i<this->limits.size(); i++)
  {
    if(p.x == this->limits[i].x && p.y == this->limits[i].y)
    {
      return true;
    }
  }
  return false;
}

Point::Point(int xx, int yy): x(xx), y(yy) {
  // TODO: implement this method.
  
  this->limits.push_back(*this);
}

RightRectangle::RightRectangle(int x0, int y0, int x1, int y1) {
  // TODO: implement this method.

  this->limits.push_back(Point(x0,y0));
  this->limits.push_back(Point(x0,y1));
  this->limits.push_back(Point(x1,y1));
  this->limits.push_back(Point(x1,y0));
   
}