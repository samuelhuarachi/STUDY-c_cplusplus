#include <stdio.h>


int main() {

    int num1 = 100;
    int num2;

    printf("&num1 = %p\n", &num1);
    printf("&num2 = %p\n\n", &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n\n", num2);

    int *p1 = NULL;
    int *p2;

    p1 = &num1;

    printf("p1 = %p\n", p1);
    printf("*p1 = %d\n\n", *p1);
    //printf("*p2 = %d\n\n", *p2);

    *p1 = 222;

    printf("num1 = %d\n\n", num1);

    return 0;
}