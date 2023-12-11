#include "float_vector.h"
#include <stdio.h>

int main() {


    FloatVector *vec = FloatVector_create(3);
    FloatVector_print(vec);
    FloatVector_append(vec, 0.0);
    FloatVector_append(vec, 1.0);
    FloatVector_append(vec, 2.0);
    FloatVector_print(vec);
    FloatVector_set(vec, 0, 0.1);
    FloatVector_print(vec);
    FloatVector_destroy(&vec);

    return 0;
}