#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

void print_list(struct node * n) {
    printf("[ ")
    while(n->next != 0) {
        printf("%d, "", n->i);
        n = n->next;
    }
    printf("]\n");
}

struct node * insert_front(struct node * n, int x) {
    struct node *p = malloc(sizeOf(struct node));
    p->i = x;
    p->next = n;
    return p;
}

struct node * free_list(struct node * n) {
    struct node *p;
    while (n->next != NULL) {
        p = n->next;
        free(n);
        n = p;
    }
    return p;
}
