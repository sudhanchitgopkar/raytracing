#include "color.h"
#include "vec3util.h"
#include "vec3.h"
#include <iostream>


using namespace std;

int main() {
  const int w = 256, h = 256;
  

  cout << "P3\n" << w << " " << h << "\n255\n";
  
  for (int row = h - 1; row >= 0; row--) {
    for (int col = 0; col < w; col++) {
      color c ((row/(h * 1.0)), (col/(w * 1.0)), (0.25));
      c.write_color(std::cout);
    } //for
  } //for

} //main
