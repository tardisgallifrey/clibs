#include <stdio.h>
#include <stdlib.h>

// Define a struct
// do not forget semicolon after closing brace
struct Node {
    int data;
    struct Node* next;
};

int main(void){
 
    struct Node* listArray[5];      // Declare an array of five Node pointers
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));   //declare head struct

    // Used a for loop to create five Nodes
    for( int i = 0; i < 5; i++){
        listArray[i] = (struct Node*)malloc(sizeof(struct Node));
        listArray[i]->data = (i + 1) * 100;
        listArray[i]->next = NULL;     // All nodes point to NULL
    }


    // Head is empty (NULL) so just assign newNode to head
    head = listArray[0];    // definition: copy newNode into head's location
                            // listArray[0]->next = NULL

    //head is not empty (NULL)
    head = listArray[1];         // copy next node to head
    head->next = listArray[0];   // point node to previous node address

    head = listArray[2];
    listArray[1]->next = listArray[0];    // As list grows, point previous head node to 
                                          // next node in list
    head->next = listArray[1];

    head = listArray[3];
    listArray[2]->next = listArray[1];
    head->next = listArray[2];

    head = listArray[4];
    listArray[3]->next = listArray[2];
    head->next = listArray[3];

    printf("Head data value is: %d\n", head->data);
    printf("Tail data value is: %d\n", listArray[0]->data);
    printf("Data: %d\n", head->next->next->data);

    return 0;
}
