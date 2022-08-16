
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(){

    //1st node
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    //2nd node
    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    //update link part of the 1st node
    head->link=current;

    //3rd node
    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    
    //update link part of the 2nd node
    head->link->link=current;

    
    printf("Node 1 data = %d\n", head->data);
    printf("Node 1 link = %d\n", head->link);
    printf("Node 2 data = %d\n", head->link->data);
    printf("Node 2 data address = %d\n", &(head->link->data));
    printf("Node 2 link = %d\n", head->link->link);
    printf("Node 3 data = %d\n", head->link->link->data);
    printf("Node 3 data address = %d\n", &(head->link->link->data));
    printf("Node 3 link = %d\n", head->link->link->link);

    return 0;

}