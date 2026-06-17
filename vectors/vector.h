#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    float x;
    float y;
} Vector;

float  vec_magnitude(Vector v);
float  vec_angle(Vector v);           /*radians, via atan2 */
/*Vector vec_add(Vector a, Vector b);
Vector vec_sub(Vector a, Vector b);
Vector vec_scale(Vector v, float s);
float  vec_dot(Vector a, Vector b);
Vector vec_normalize(Vector v);*/

#endif