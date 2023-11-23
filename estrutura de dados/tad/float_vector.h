
typedef struct float_vector FloatVector;

FloatVector *create(int capacity);
void destroy(FloatVector **);
int size(const FloatVector *vec);
int capacity(const FloatVector *vec);
float at(const FloatVector *, int);
float get(const FloatVector *vec, int index);
void append(FloatVector *vec, int index, float val);
void set(FloatVector *vec, int index, float val);
void print(const FloatVector *vec);
