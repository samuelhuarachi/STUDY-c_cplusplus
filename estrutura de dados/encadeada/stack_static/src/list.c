#include "list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _doubly_node {
    int val;
    struct _doubly_node *prev;
    struct _doubly_node *next;

} DoublyNode, Node;

typedef struct _doubly_linked_list {
    Node *begin;
    Node *end;
    size_t size;
} DoublyLinkedList, List;

Node *Node_create(int val) {
    Node *node = (Node*) calloc(1, sizeof(Node));
    node->prev = NULL;
    node->next = NULL;
    node->val = val;

    return node;
}

List *List_create() {
    List *L = (List*) calloc(1, sizeof(List));
    L->begin = NULL;
    L->end = NULL;
    L->size = 0;

    return L;
}
void List_destroy(List **L_ref) {
    List *L = *L_ref;
    Node *p = L->begin;
    Node *aux = NULL;

    while (p!=NULL) {
        aux = p;
        p = p->next;
        free(aux);
    }
    free(L);
    *L_ref = NULL;
}

bool List_is_empty(const List *L) {
    return L->size == 0;
}

void List_add_first(List *L, int val) {
    Node *p = Node_create(val);
    p->next = L->begin;

    if (List_is_empty(L)) L->end = p;
    else L->begin->prev = p;

    L->begin = p;
    L->size++;
}

void List_add_last(List *L, int val) {
    Node *p = Node_create(val);
    p->prev = L->end;

    if (List_is_empty(L)) 
        L->begin = p;
    else 
        L->end->next = p;
    

    L->end = p;
    L->size++;
}

void List_print(const List *L) {
    Node *p = L->begin;
    printf("L -> ");
    while (p != NULL)
    {
        printf("%d -> ", p->val);
        p = p->next;
    }
    printf("NULL \n");

    if (L->end == NULL) {
        printf("L->end = NULL \n");
    } else {
        printf("L->end = %d\n", L->end->val);
    }

    printf("Size: %lu\n", L->size);
    puts("\n");
}



void List_inverted_print(const List *L) {

    Node *p = L->end;
    printf("L -> end -> ");
    while (p != NULL)
    {
        printf("%d -> ", p->val);
        p = p->prev;
    }
    printf("NULL \n");

    if (L->end == NULL) {
        printf("L->begin = NULL \n");
    } else {
        printf("L->begin = %d\n", L->begin->val);
    }

    printf("Size: %lu\n", L->size);
    puts("\n");
}

void List_remove(List *L, int val) {
    if (!List_is_empty(L)) {
        Node *p = L->begin;
       if (L->begin->val == val) {
            L->begin = p->next;
            if (L->end == p)
                L->end = NULL;
            else 
                L->begin->prev = NULL;
            
            free(p);
            L->size--;
       } else {
            p = p->next;

            while(p != NULL) {
                if (p->val == val) {
                    p->prev->next = p->next;
                    if (L->end == p) {
                        L->end = p->prev;
                    } else {
                        p->next->prev = p->prev;
                    }
                    free(p);
                    p = NULL;
                    L->size--;
                } else {
                    p = p->next;
                }
            }
       }
    }
}