#include <stdio.h>
#include <math.h>
#include "vector.h"

float vec_magnitude(Vector v) {
    return sqrtf((v.x*v.x) + (v.y*v.y));
}

