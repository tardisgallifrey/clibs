#include <stdio.h>
#include <stdlib.h>

// Define a struct
// do not forget semicolon after closing brace
struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value);
void printList(struct Node* head_node);

int main(void){
 
    struct Node* listArray[5];      // Declare an array of five Node pointers
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));   //declare head struct
    struct Node* temp;

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
    listArray[1]->next = head;
    head = listArray[1];

    listArray[2]->next = head;
    head = listArray[2];

    listArray[3]->next = head;
    head = listArray[3];

    listArray[4]->next = head;
    head = listArray[4];

    printf("Printing linked list (head is first number):\n");
    printList(head);

    return 0;
}


void printList(struct Node* head_node){
    do{
        printf(" %d -- ", head_node->data);
        head_node = head_node->next;
    }while(head_node->next != NULL);

    printf("%d\n", head_node->data);
}
