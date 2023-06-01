#include <stdio.h>

int main() {

    int num1 = 100;

    int *p1 = &num1;
    int* *p2 = &p1; // parece a mesma coisa int **p2 = &p1;

    printf("&p1 = %p\n", &p1);
    printf("p2 = %p\n\n", p2);
    

    printf("p1 = %p\n", p1);
    printf("&num1 = %p\n", &num1);
    printf("*p2 = %p\n\n", *p2);

    printf("**p2 = %d\n\n", **p2);

    **p2 = 222;

    printf("num1 = %d\n\n", num1);


    return 0;
}