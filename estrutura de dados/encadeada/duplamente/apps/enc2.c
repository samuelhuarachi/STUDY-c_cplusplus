#include "list.h"
#include <stdio.h>

int main() {
    
    List *L = List_create();
    List_add_last(L, 1);
    List_add_last(L, 2);
    List_add_last(L, 3);
    List_add_last(L, 4);
    List_add_last(L, 5);
    List_add_last(L, 6);
    List_print(L);
    List_remove(L, 2);
    List_print(L);
    List_remove(L, 4);
    List_print(L);
    List_remove(L, 6);
    List_print(L);
    List_destroy(&L);

    return 0;
}