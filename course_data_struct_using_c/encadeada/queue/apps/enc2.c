#include "queue.h"
#include <stdio.h>

int main() {
    
    Queue *Q = Queue_create();
    int val;

    Queue_print(Q);
    Queue_enqueue(Q, 10);
    Queue_enqueue(Q, 20);
    Queue_enqueue(Q, 30);
    
    Queue_print(Q);

    puts("\npeek");
    val = Queue_peek(Q);
    printf("val = %d\n", val);
    puts("");

    Queue_dequeue(Q);
    Queue_dequeue(Q);
    Queue_print(Q);

    Queue_destroy(&Q);

    return 0;
}

