#ifndef VEC3UTIL_H
#define VEC3UTIL_H

#include "vec3.h"

inline vec3 operator+ (const vec3& v1, const vec3& v2);
inline vec3 operator- (const vec3& v1, const vec3& v2);
inline vec3 operator* (const vec3& v1, const vec3& v2);
inline vec3 operator* (const vec3& v, double k);
inline vec3 operator/ (const vec3& v, double k);
inline double dot(const vec3& v1, const vec3& v2);
inline vec3 cross(const vec3& v1, const vec3& v2);
inline vec3 unit(vec3& v);

#endif
