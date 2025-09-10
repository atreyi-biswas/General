#include<stdio.h>
#include<stdlib.h>


/*
==== CREATE A CIRCULAR LINKED LIST WITH NUMBERS 1, 2, 3 ====
1. create struct of NODE consisting of: data, next (next link), prev (previous link)
2. in int main, create the first node and declare it's data NULL
3. connect node1->next=NULL & connect node1->prev=NULL
4. create other nodes the same way
5. connect node1 next to the desired node
6. connect nodes' prev(s) to the desired node
7. connect last node's prev to first node
*/

typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}Node;


int main(){
    Node *node1 = (Node*)malloc(sizeof(Node));
    Node *node2 = (Node*)malloc(sizeof(Node));
    Node *node3 = (Node*)malloc(sizeof(Node));


    //node 1
    node1->data=0;
    node1->next=NULL;
    node1->prev=NULL;

    //node 2
    node2->data=0;
    node2->next=NULL;
    node2->prev=NULL;

    //node 3
    node3->data=0;
    node3->next=NULL;
    node3->prev=NULL;

    printf("==================================\n\n");
    printf("Node 1:\n");
    printf("data= %d\n", node1->data);
    printf("next address: %p\n", node1->next);
    printf("prev address: %p\n", node1->prev);
    printf("----------------------------------\n");
    printf("Node 2:\n");
    printf("data= %d\n", node2->data);
    printf("next address: %p\n", node2->next);
    printf("prev address: %p\n", node2->prev);
    printf("----------------------------------\n");
    printf("Node 3:\n");
    printf("data= %d\n", node3->data);
    printf("next address: %p\n", node3->next);
    printf("prev address: %p\n", node3->prev);
    printf("==================================\n\n");
    printf("node1->prev address:  %p\n", node1->prev);
    printf("node2->prev address:  %p\n", node2->prev);
    printf("node1 address:        %p\n", node1);
    printf("node1->next address:  %p\n", node1->next);
    printf("node3->prev address:  %p\n", node3->prev);
    printf("node2 address:        %p\n", node2);
    printf("node2->next address:  %p\n", node2->next);
    printf("node3 address:        %p\n", node3);
    printf("node3->next address:  %p\n", node3->next);
    printf("==================================\n\n");

    //---------------------------------------------

    node1->next=node2;
    node2->prev=node1;  
    node2->next=node3;
    node3->prev=node2;
    node3->next=node1;
    node1->prev=node3;

    printf("Node 1 (next linked):\n");
    printf("data= %d\n", node1->data);
    printf("next address: %p\n", node1->next);
    printf("prev address: %p\n", node1->prev);
    printf("----------------------------------\n");
    printf("Node 2 (nextlinked):\n");
    printf("data= %d\n", node2->data);
    printf("next address: %p\n", node2->next);
    printf("prev address: %p\n", node2->prev);
    printf("----------------------------------\n");
    printf("Node 3 (next linked):\n");
    printf("data= %d\n", node3->data);
    printf("next address: %p\n", node3->next);
    printf("prev address: %p\n", node3->prev);
    printf("==================================\n\n");
    printf("node1->prev address:  %p\n", node1->prev);
    printf("node2->prev address:  %p\n", node2->prev);
    printf("node1 address:        %p\n", node1);
    printf("node1->next address:  %p\n", node1->next);
    printf("node3->prev address:  %p\n", node3->prev);
    printf("node2 address:        %p\n", node2);
    printf("node2->next address:  %p\n", node2->next);
    printf("node3 address:        %p\n", node3);
    printf("node3->next address:  %p\n", node3->next);
    printf("==================================\n\n");

    //-----------------------

    node1->data=1;
    node2->data=2;
    node3->data=3;

    printf("Node 1 (element updated):\n");
    printf("data= %d\n", node1->data);
    printf("next address: %p\n", node1->next);
    printf("prev address: %p\n", node1->prev);
    printf("----------------------------------\n");
    printf("Node 2 (element updated):\n");
    printf("data= %d\n", node2->data);
    printf("next address: %p\n", node2->next);
    printf("prev address: %p\n", node2->prev);
    printf("----------------------------------\n");
    printf("Node 3 (element updated):\n");
    printf("data= %d\n", node3->data);
    printf("next address: %p\n", node3->next);
    printf("prev address: %p\n", node3->prev);
    printf("==================================\n\n");
    printf("node1->prev address:  %p\n", node1->prev);
    printf("node2->prev address:  %p\n", node2->prev);
    printf("node1 address:        %p\n", node1);
    printf("node1->next address:  %p\n", node1->next);
    printf("node3->prev address:  %p\n", node3->prev);
    printf("node2 address:        %p\n", node2);
    printf("node2->next address:  %p\n", node2->next);
    printf("node3 address:        %p\n", node3);
    printf("node3->next address:  %p\n", node3->next);
    printf("==================================\n\n");

    free(node1);
    free(node2);
    free(node3);
}
