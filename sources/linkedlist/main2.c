#include <stdio.h>
#include <stdlib.h>


// Define a struct
// do not forget semicolon after closing brace
struct Node {
    int data;
    struct Node* next;     //  This links a node to another node
};


//  function declarations
struct Node* createNode(int value);
void printList(struct Node* head_node);
struct Node* addAtHead(struct Node* newNode, struct Node* head_node);


//  main program
int main(void){
 
    struct Node* listArray[5];      // Declare an array of five Node pointers
    struct Node* head = createNode(55);

    // Used a for loop to create five Nodes
    for( int i = 0; i < 5; i++){
        listArray[i] = createNode((i + 1) * 100);  
    }


    //head is not empty (NULL)
    head = addAtHead(listArray[0], head);
    head = addAtHead(listArray[1], head);
    head = addAtHead(listArray[2], head);
    head = addAtHead(listArray[3], head);
    head = addAtHead(listArray[4], head);

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


//  How to create a new Node
//  new Nodes have NULL next pointers

struct Node* createNode(int value){
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));   //declare head struct
    newNode->data = value;
    newNode->next = NULL;
    return newNode;

}


struct Node* addAtHead(struct Node* newNode, struct Node* head_node){
    newNode->next = head_node;
    head_node = newNode;

    return head_node;
}
