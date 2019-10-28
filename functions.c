#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

void print_list(struct node *n) {
    printf("[ ");
    while(n != NULL) {
        printf("%d ", n->i);
        n = n->next;
    }
    printf("]\n");
}

struct node * insert_front(struct node *n, int x) {
    struct node *p = malloc(sizeof(struct node));
    p->i = x;
    p->next = n;
    return p;
}

struct node * free_list(struct node *n) {
    struct node *p;
    while (n != NULL) {
        printf("Freeing Node: %d\n", n->i);
        p = n->next;
        free(n);
        n = p;
    }
    return p;
}

struct node * remove_node(struct node *front, int data) {
    struct node *p;
    struct node *temp;
    p = front;
    if (front->i == data) {
        p = p->next;
        free(front);
        return p;
    }
    while (p->next != NULL) {
        if(p->next->i == data) {
            temp = p->next;
            p->next = p->next->next;
            free(temp);
            return front;
        }
        else {
            p = p->next;
        }
    }
    return front;
}
