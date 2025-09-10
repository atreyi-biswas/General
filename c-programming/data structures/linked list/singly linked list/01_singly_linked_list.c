#include<stdio.h>
#include<stdlib.h>


/*
==== CREATE A SINGLY LINKED LIST WITH NUMBERS 1, 2, 3 ====
1. create struct of NODE consisting of: data, next (next link)
2. in int main, create the first node and declare it's data NULL
3. connect node1->next=NULL
4. create other nodes the same way
5. connect node1 next to the desired node
*/

typedef struct node{
    int data;
    struct node* next;
}Node;


int main(){
    Node *node1 = (Node*)malloc(sizeof(Node));
    Node *node2 = (Node*)malloc(sizeof(Node));
    Node *node3 = (Node*)malloc(sizeof(Node));

    //------DECLARING NODES------

    //node 1
    node1->data=0;
    node1->next=NULL;

    //node 2
    node2->data=0;
    node2->next=NULL;

    //node 3
    node3->data=0;
    node3->next=NULL;

    printf("==================================\n\n");
    printf("Node 1:\n");
    printf("data=         %d\n", node1->data);
    printf("next address: %p\n", node1->next);
    printf("----------------------------------\n");
    printf("Node 2:\n");
    printf("data=         %d\n", node2->data);
    printf("next address: %p\n", node2->next);
    printf("----------------------------------\n");
    printf("Node 3:\n");
    printf("data=         %d\n", node3->data);
    printf("next address: %p\n\n", node3->next);
    printf("==================================\n\n");
    printf("nod1 address:        %p\n", node1);
    printf("nod1->next address:  %p\n", node1->next);
    printf("nod2 address:        %p\n", node2);
    printf("node2->next address: %p\n", node2->next);
    printf("nod3 address:        %p\n", node3);
    printf("nod3->next address:  %p\n", node3->next);
    printf("==================================\n\n");

    //------LINKING NODES------

    node1->next=node2;  
    node2->next=node3;

    printf("Node 1 (next linked):\n");
    printf("data=         %d\n", node1->data);
    printf("next address: %p\n", node1->next);
    printf("----------------------------------\n");
    printf("Node 2 (nextlinked):\n");
    printf("data=         %d\n", node2->data);
    printf("next address: %p\n", node2->next);
    printf("----------------------------------\n");
    printf("Node 3 (next linked):\n");
    printf("data=         %d\n", node3->data);
    printf("next address: %p\n", node3->next);
    printf("==================================\n\n");
    printf("nod1 address:        %p\n", node1);
    printf("nod1->next address:  %p\n", node1->next);
    printf("nod2 address:        %p\n", node2);
    printf("node2->next address: %p\n", node2->next);
    printf("nod3 address:        %p\n", node3);
    printf("nod3->next address:  %p\n", node3->next);
    printf("==================================\n\n");

    //------UPDATING VALUES OF ELEMENTS------

    node1->data=1;
    node2->data=2;
    node3->data=3;

    printf("Node 1 (element updated):\n");
    printf("data=         %d\n", node1->data);
    printf("next address: %p\n", node1->next);
    printf("----------------------------------\n");
    printf("Node 2 (element updated):\n");
    printf("data=         %d\n", node2->data);
    printf("next address: %p\n", node2->next);
    printf("nod1 address: %p\n", node1);
    printf("----------------------------------\n");
    printf("Node 3 (element updated):\n");
    printf("data=         %d\n", node3->data);
    printf("next address: %p\n", node3->next);
    printf("nod2 address: %p\n", node2);
    printf("==================================\n\n");
    printf("nod1 address:        %p\n", node1);
    printf("nod1->next address:  %p\n", node1->next);
    printf("nod2 address:        %p\n", node2);
    printf("node2->next address: %p\n", node2->next);
    printf("nod3 address:        %p\n", node3);
    printf("nod3->next address:  %p\n", node3->next);
    printf("==================================\n\n");

    free(node1);
    free(node2);
    free(node3);
}
