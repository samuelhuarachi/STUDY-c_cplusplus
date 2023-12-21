#include "linked_list.h"
#include <stdio.h>

int main() {
    LinkedList *L = LinkedList_create();
    LinkedList_add_last(L, 1);
    LinkedList_add_last(L, 2);
    LinkedList_add_last(L, 3);
    LinkedList_add_last(L, 4);
    LinkedList_add_last(L, 5);
    LinkedList_add_last(L, 6);
    LinkedList_print(L);
    LinkedList_remove(L, 3);
    LinkedList_print(L);

    LinkedList_remove(L, 6);
    LinkedList_print(L);

    LinkedList_remove(L, 11);
    LinkedList_print(L);



    // LinkedList *L = LinkedList_create();
    // LinkedList_add_first(L, 5);
    // LinkedList_add_first(L, 4);
    // LinkedList_add_first(L, 2);
    // LinkedList_add_first(L, 10);
    // LinkedList_print(L);

    return 0;
}