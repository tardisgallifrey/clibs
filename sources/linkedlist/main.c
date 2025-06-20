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
//#include "llint.c"

#endif


//  main program
int main(void){
 
    struct NodeInt* listArray[5];      // Declare an array of five Node pointers
    struct NodeInt* head = createNodeInt(55);

    // Used a for loop to create five Nodes
    for( int i = 0; i < 5; i++){
        listArray[i] = createNodeInt((i + 1) * 100);
    }

    head = addAtHeadInt(listArray[0], head);

    printListInt(head);

    return 0;
}


