#ifndef SINGLELLFUNC_H
#define SINGLELLFUNC_H

struct node {
    int data;
    struct node *link;
};


void add_at_end(struct node *head, int data);
void add_at_beg(struct node **head, int data);
void add_at_pos(struct node *head, int data, int pos);
void del_last(struct node *head);
void del_pos(struct node **head, int pos);
struct node* del_first(struct node *head);
struct node* del_list(struct node *head);
struct node* reverse(struct node *head);


#endif