#ifndef COLOR_H
#define COLOR_H

#include "vec3util.h"
#include "vec3.h"
#include <iostream>

class color : public vec3 {
 public:
  color();
  color(double r, double g, double b);
  void write_color(std::ostream& o);
}; //class

#endif
