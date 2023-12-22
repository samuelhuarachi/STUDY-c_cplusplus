
typedef struct float_vector FloatVector;

FloatVector *FloatVector_create(int capacity);
void FloatVector_destroy(FloatVector **);
int FloatVector_size(const FloatVector *vec);
int FloatVector_capacity(const FloatVector *vec);
float FloatVector_at(const FloatVector *, int);
float FloatVector_get(const FloatVector *vec, int index);
void FloatVector_append(FloatVector *vec, float val);
void FloatVector_set(FloatVector *vec, int index, float val);
void FloatVector_print(const FloatVector *vec);

// impelentar remocao, apagar todos os elementos, e clonar ...