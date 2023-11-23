#include "float_vector.h"
#include <stdio.h>
#include <stdlib.h>

struct float_vector {
    int capacity;
    int size;
    float *data;
};

FloatVector *create(int capacity) {
    FloatVector *vec = (FloatVector*) calloc(1, sizeof(FloatVector));
    vec->size = 0;
    vec->capacity = capacity;
    vec->data = (float*) calloc(capacity, sizeof(float));

    return vec;
};

void destroy(FloatVector **vec_ref) {
    FloatVector *vec = *vec_ref;

    free(vec->data);
    free(vec);
    *vec_ref = NULL;
}