#include "color.h"
#include "vec3util.h"
#include "vec3.h"
#include <iostream>

color::color () {
  vec3();
} //color

color::color(double r, double g, double b):
  vec3(r, g, b)
{
} //color

void color::write_color(std::ostream& o) {
  int r = static_cast<int> (this->getx() * 255.999);
  int g = static_cast<int> (gety() * 255.999);
  int b = static_cast<int> (getz() * 255.999);

o << r << ' ' << g << ' ' << b << '\n';
}//write_color
