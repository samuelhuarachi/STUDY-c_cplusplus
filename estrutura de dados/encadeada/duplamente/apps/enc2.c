#include "list.h"
#include <stdio.h>

int main() {
    List *L = List_create();
    List_add_first(L, 1);
    List_add_first(L, 2);
    List_add_first(L, 3);
    List_add_first(L, 4);
    List_add_first(L, 5);
    List_add_first(L, 6);
    List_inverted_print(L);
    List_print(L);
    List_destroy(&L);

    return 0;
}