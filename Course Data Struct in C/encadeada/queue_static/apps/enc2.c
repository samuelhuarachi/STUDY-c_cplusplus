#include "static_queue.h"
#include <stdio.h>

int main() {
    
    StaticQueue *Q = StaticQueue_create(5);
    int val;

    StaticQueue_print(Q);
    StaticQueue_enqueue(Q, 10);
    StaticQueue_enqueue(Q, 20);
    StaticQueue_enqueue(Q, 30);
    
    StaticQueue_print(Q);

    puts("\npeek");
    val = StaticQueue_peek(Q);
    printf("val = %d\n", val);
    puts("");

    StaticQueue_dequeue(Q);
    StaticQueue_dequeue(Q);
    StaticQueue_print(Q);

    StaticQueue_destroy(&Q);

    return 0;
}

