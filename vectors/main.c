#include "vector.h"
#include <stdio.h>

int main(void) {
    Vector v = {3,2};
    printf("%.3f", vec_magnitude(v));
    return 0;
}