#include <stdio.h>
#include <math.h>
#include "vector.h"

float vec_magnitude(Vector v) {
    return sqrtf((v.x*v.x) + (v.y*v.y));
}

float vec_angle(Vector v) {
    return atan2f(v.y,v.x); // Answer is in radians, not degrees
}

Vector vec_add(Vector a, Vector b) {
    Vector c = {a.x + b.x, a.y + b.y};
    return c;
}

Vector vec_sub(Vector a, Vector b) {
    Vector c = {a.x - b.x, a.y - b.y};
    return c;
}

Vector vec_scale(Vector v, float s) {
    Vector scaled = {v.x * s, v.y * s};
    return scaled;
}

float vec_dot(Vector a, Vector b) {
    return ((a.x * b.x) + (a.y * b.y));
}

Vector vec_normalize(Vector v) {
    float magnitude = sqrtf((v.x * v.x) + (v.y * v.y));
    if (magnitude == 0.0f) {
        return v;   
    }
    Vector normalised = {(v.x / magnitude), (v.y / magnitude)};
    return normalised; 
}