//  linked list functions for integers
//
//
#ifndef STDIO
#define STDIO

#include <stdio.h>
#include <stdlib.h>

#endif

#ifndef NODE
#define NODE

#include "node.h"

#endif

#ifndef LLINT
#define LLINT

#include "llint.h"

#endif

//  How list is printed function
void printListInt(struct NodeInt* head_node){
    
    do{
        printf(" %d -- ", head_node->data);  //  print head_node Data
        head_node = head_node->next;         //  point head_node to next in list
    }while(head_node->next != NULL);

    printf("%d\n", head_node->data);
}


//  How to create a new Node
//  new Nodes have NULL next pointers

struct NodeInt* createNodeInt(int value){
    
    struct NodeInt* newNode = (struct NodeInt*)malloc(sizeof(struct NodeInt));   //declare head struct
    newNode->data = value;
    newNode->next = NULL;
    return newNode;

}


struct NodeInt* addAtHeadInt(struct NodeInt* newNode, struct NodeInt* head_node){
    newNode->next = head_node;
    head_node = newNode;

    return head_node;
}
