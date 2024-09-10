#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _snode {
    int val;
    struct _snode *next;

} SNode;

typedef struct _linked_list {
    SNode *begin;
    SNode *end;
} LinkedList;


LinkedList *LinkedList_create() {
    LinkedList *L = (LinkedList *) calloc(1, sizeof(LinkedList));
    L->begin = NULL;
    return L;
}

SNode *SNode_create(int val) {
    SNode *snode = (SNode *) calloc(1, sizeof(SNode));
    snode->val = val;
    snode->next = NULL;

    return snode;
}

void LinkedList_destroy(LinkedList **L_ref) {
    LinkedList *L = *L_ref;
    SNode *p = L->begin;
    SNode *aux = NULL;

    while (p != NULL) {
        aux = p;
        p = p->next;
        free(aux);
    }

    free(L);
    *L_ref = NULL;
}


bool LinkedList_is_empty(const LinkedList *L) {
    return L->begin == NULL && L->end == NULL;
}

void LinkedList_add_first(LinkedList *L, int val) {
    SNode *p = SNode_create(val);
    p->next = L->begin;

    if (LinkedList_is_empty(L)) {
        L->end = p;
    }

    L->begin = p;
}

// void LinkedList_add_first(LinkedList *L, int val) {
//     SNode *p = SNode_create(val);
//     p->next = L->begin;
//     L->begin = p;
// }

void LinkedList_add_last(LinkedList *L, int val) {
    SNode *q = SNode_create(val);
    if (LinkedList_is_empty(L)) {
        L->begin = L->end = q;
    } else {
        L->end->next = q;
        L->end = L->end->next;
    }
}

void LinkedList_add_last_slow(LinkedList *L, int val) {
    SNode *q = SNode_create(val);
    if (LinkedList_is_empty(L)) {
        L->begin = q;
    } else {
        SNode *p = L->begin;
        if (p != NULL) {
            while(p->next != NULL) {
                p = p->next;
            }
        }
        
        p->next = q;
    }
}

void LinkedList_print(const LinkedList *L) {
    SNode *p = L->begin;
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

    puts("\n");
    
}

// void LinkedList_remove(LinkedList *L, int val){
//     if (!LinkedList_is_empty(L)) {
//         if (L->begin->val == val) {
//             SNode *pos = L->begin;

//             if (L->begin == L->end) {
//                 L->end = NULL;
//             }

//             L->begin = L->begin->next;
//             free(pos);
//         } else {
//             SNode *prev = L->begin;
//             SNode *pos = L->begin->next;

//             while(pos != NULL && pos->val != val){
//                 prev = pos;
//                 pos = pos->next;
//             }

//             if (pos != NULL) {
//                 prev->next = pos->next;
                
//                 if (pos->next == NULL) {
//                     L->end = prev;
//                 }

//                 free(pos);
//             }
//         }
//     }
// }

void LinkedList_remove(LinkedList *L, int val) {
    if (!LinkedList_is_empty(L)) {
        SNode *prev = NULL;
        SNode *pos = L->begin;

        while (pos != NULL && pos->val != val) {
            prev = pos;
            pos = pos->next;
        }

        if (pos != NULL) {
            if (L->end == pos) {
                L->end = prev;
            }
            if (L->begin == pos) {
                L->begin = pos->next;
            } else
            {
                prev->next = pos->next;
            }
            free(pos);
        }
    }
}