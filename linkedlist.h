#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

enum {
	NUMBER = 10
};

struct node {
    int number;
    struct node* next;
    struct node* jumper;
};

struct node* build_linked_list(int elements);

void print_linked_list(struct node* list, int elements);

int delete_linked_list(struct node* list, int index);

int sum_values_in_linked_list(struct node * list, int elements);

#endif
