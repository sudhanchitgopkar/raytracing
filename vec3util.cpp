#include "vec3util.h"
#include "vec3.h"
#include <cmath>

inline vec3 operator+(const vec3& v1, const vec3& v2) {
  return vec3(v1[0] + v2[0], v1[1] + v2[1], v1[2] + v2[2]);
} //+

inline vec3 operator-(const vec3& v1, const vec3& v2) {
  return vec3(v1[0] - v2[0], v1[1] - v2[1], v1[2] - v2[2]);
} //-

inline vec3 operator*(const vec3& v1, const vec3& v2) {
  return vec3(v1[0] * v2[0], v1[1] * v2[1], v1[2] * v2[2]);
} //*

inline vec3 operator*(const vec3& v, double d) {
  return vec3(v[0] * d, v[1] * d, v[2] * d);
} //*

inline vec3 operator/(const vec3& v, double d) {
  return v * (1/d);
} ///

inline double dot(const vec3& v1, const vec3& v2) {
  return v1[0] * v2[0] + v1[1] * v2[1] + v1[3] * v2[3];
} //dot

inline vec3 cross(const vec3& v1, const vec3& v2) {
  return vec3(v1[1] * v2[2] - v1[2] * v2[1],
	      v1[2] * v2[0] - v1[0] * v2[2],
	      v1[0] * v2[1] - v1[1] * v2[0]);
} //cross

inline vec3 unit(vec3& v) {
  return v/v.len();
} //unit









