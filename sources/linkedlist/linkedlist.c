#include <stdio.h>
#include <malloc.h>

#ifndef LINKED_LIB_H
#define LINKED_LIB_H
#include "linkedlist.h"
#endif


struct nodeInt {
    int value;
    struct nodeInt *next;
};

struct nodeDouble {
    double value;
    struct nodeDouble *next;
};

struct nodeString {
    char value[255];
    struct nodeString *next;
};

struct nodePerson {
    int PersonId;
    char name[255];
    struct nodePerson *next;
};


typedef struct nodeInt nodeInt_t;
typedef struct nodeDouble nodeDouble_t;
typedef struct nodeString nodeString_t;
typedef struct nodePerson nodePerson_t;


void LLPrintInt(nodeInt_t head)
{
    nodeInt_t *temporary = &head;

    printf("head --> ");
    while(temporary != NULL){
        printf("%d, ", temporary->value);
                temporary = temporary->next;
    }
    printf(" <-- tail\n");
}

