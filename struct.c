#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
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
