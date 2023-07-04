#ifndef VEC3_H
#define VEC3_H

#include <cmath>
#include <iostream>

class vec3 {
private:
  double x, y, z;	
  
public:
  //constructors
  vec3();
  vec3(double x, double y, double z);
  
  //getters
  double getx();
  double gety();
  double getz();
  
  //setters
  void setx(double x);
  void sety(double y);
  void setz(double z);
  
  //overrides
  std::ostream& operator<< (std::ostream&);
  vec3 operator- ();
  double operator[] (int i) const;
  double& operator[] (int i);

  //operations
  vec3& operator+= (const vec3&);
  vec3& operator-= (const vec3&);
  vec3& operator*= (double k);
  vec3& operator/= (double k);
  
  //length
  double len();
  double lenlen();  
  
  //static utilities
  static inline vec3 dot(const vec3& v1, const vec3& v2);
  static inline vec3 cross(const vec3& v1, const vec3& v2);
  static inline vec3 unit(const vec3& v1);
}; //class

#endif
