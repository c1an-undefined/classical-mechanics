#include "vector.h"
#include <stdio.h>

int main(void) {
    Vector v = {3,2};
    Vector x = {4,1};

    Vector added = vec_add(v, x);
    Vector subbed = vec_sub(v, x);
    Vector scaled = vec_scale(v, 5.0f);
    Vector norm = vec_normalize(v);

    printf("%.3f \n", vec_magnitude(v));
    printf("%.3f \n", vec_angle(v));
    printf("%.3f %.3f \n", added.x, added.y);
    printf("%.3f %.3f \n", subbed.x, subbed.y);
    printf("%.3f %.3f \n", scaled.x, scaled.y);
    printf("%.3f \n", vec_dot(v, x));
    printf("%.3f %.3f \n", norm.x, norm.y);
    return 0;
}