#include <stdio.h>


int main() {

    int luke = 2; // integer 4 bytes
    int *p1 = NULL; // ocupa 8 bytes de memoria
    int *p2;

    p1 = &luke;
    p2 = p1;
    *p2 = 3;

    printf("O valor de Luke eh: %d\n", *p2);

    return 0;
}