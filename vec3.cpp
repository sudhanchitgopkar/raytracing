#include "vec3.h"
#include <cmath>
#include <iostream>

vec3::vec3() {
  x = 0;
  y = 0;
  z = 0;
} //vec3

vec3::vec3(double x, double y, double z) {
  this->x = x;
  this->y = y;
  this->z = z;
} //vec3

double vec3::getx() {
  return x;
} //getx

double vec3::gety() {
  return y;
} //getx

double vec3::getz() {
  return z;
} //getx

void vec3::setx(double x) {
  this->x = x;
} //setx

void vec3::sety(double y) {
  this->y = y;
} //setx

void vec3::setz(double z) {
  this->z = z;
} //setx

std::ostream& vec3::operator<< (std::ostream& o) {
  return o << '[' << x << ',' << y << ',' << z << ']';
} //<< 

vec3 vec3::operator- () {
  return vec3(-1 * x, -1 * y, -1 * z);
} //-

double vec3::operator[] (int i) const {
  return i == 0 ? x : i == 1 ? y : z; 
} //+

double& vec3::operator[] (int i) {
  return i == 0 ? x : i == 1 ? y : z; 
} //+

vec3& vec3::operator+= (const vec3& v) {
  x += v[0];
  y += v[1];
  z += v[2];

  return *this;
} //+=

vec3& vec3::operator*= (double k) {
  x *= k;
  y *= k;
  z *= k;

  return *this;
} //*=

vec3& vec3::operator/= (double k) {
  return *this *= 1/k;
} ///=

double vec3::len() {
  return std::sqrt(lenlen());
} //len

double vec3::lenlen() {
  return x*x + y*y + z*z;
} //len
  
