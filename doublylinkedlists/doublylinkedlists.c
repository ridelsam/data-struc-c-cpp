
#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node* prev;
    struct node* next;
};






int main(){

    //Creating double linked list
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->prev = NULL;
    head->prev = NULL;
  

    return 0;

}



