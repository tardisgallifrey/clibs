#include <stdio.h>
#include <stdlib.h>

//  A demo of the simplest form of building a linked list
//  in C.  The only function is just to print out the
//  linked list from head to tail.

// Define a struct
// do not forget semicolon after closing brace
struct Node {
    int data;
    struct Node* next;     //  This links a node to another node
};


//  function declarations
struct Node* createNode(int value);
void printList(struct Node* head_node);


//  main program
int main(void){
 
    struct Node* listArray[5];      // Declare an array of five Node pointers
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));   //declare head struct

    // Used a for loop to create five Nodes
    for( int i = 0; i < 5; i++){
        listArray[i] = (struct Node*)malloc(sizeof(struct Node));  // malloc is best to declare
                                                                   // node in memory
        listArray[i]->data = (i + 1) * 100;     //  Data is integers by index + 1 * 100
        listArray[i]->next = NULL;              // All new nodes point to NULL
    }

    //  This is add new node at the head stuff
    //
    // Head is empty (NULL) so just assign a new node as the head
    head = listArray[0];    // definition: copy the node into head's location
                            // listArray[0]->next points to NULL

    //head is not empty (NULL)
    listArray[1]->next = head;
    head = listArray[1];

    // add another node to linked list
    // all new nodes become head and the list moves down
    listArray[2]->next = head;
    head = listArray[2];

    listArray[3]->next = head;
    head = listArray[3];

    listArray[4]->next = head;
    head = listArray[4];

    //  This is add new node at tail stuff
    //
    struct Node* node[5];
    head = createNode(56);

    for( int i = 0; i < 5; i++){
        node[i] = createNode((i + 2) * 3);
    }

    head->next = node[0];
    node[0]->next = node[1];
    node[1]->next = node[2];

    printf("Printing linked list (head is first number):\n");
    printList(head);

    return 0;
}

//  How list is printed function
void printList(struct Node* head_node){
    do{
        printf(" %d -- ", head_node->data);  //  print head_node Data
        head_node = head_node->next;         //  point head_node to next in list
    }while(head_node->next != NULL);

    printf("%d\n", head_node->data);
}

struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
