#include "stack.h"
#include <stdio.h>

int main() {
    
    Stack *S = Stack_create();
    int top_val;

    Stack_print(S);
    puts("\npushing 0, 10, 20");
    Stack_push(S, 0);
    Stack_push(S, 10);
    Stack_push(S, 20);
    Stack_push(S, 30);
    Stack_push(S, 40);
    Stack_push(S, 50);
    Stack_push(S, 60);
    Stack_push(S, 70);
    Stack_push(S, 80);
    
    Stack_print(S);

    top_val = Stack_peek(S);
    printf("top_val = %d\n", top_val);
    puts("");

    Stack_pop(S);
    Stack_pop(S);

    Stack_print(S);

    Stack_destroy(&S);

    return 0;
}

