#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

stack* init_stack (int sz) {
    stack* s = (stack*)malloc(sizeof(stack));
    if (s == NULL) {
        fprintf (stderr, "out of memory");
        return NULL;
    }
    s->size = sz;
    s->crt = 0;
    s->arr = (int*)malloc(sz*sizeof(int));
    if (s->arr == NULL) {
        fprintf (stderr, "out of memory");
        free (s);
        return NULL;
    }
    return s;
}

void remove_stack (stack *s) {
    if (s != NULL) {
        if (s->arr != NULL) {
            free (s->arr);
        }
        free (s);
    }
    s = NULL;
}

int is_empty_stack (stack *s) {
    if (s == NULL) {
        printf ("stack doesnt exist\n");
    }
    int x;
    if (s->crt == 0) {
        x = 1;
    }
    else {
        x = 0;
    }
}

int pop_stack (stack*s) {
    int x;
    if (s == NULL) {
        printf ("stack doesnt exist\n");
    }
    if (is_empty_stack == 0) {
        x = s->arr[--s->crt];
    }
    else {
        printf ("Stack is empty!");
    }
    return x;
}

void push_stack (stack *s, int value) {
    if (s == NULL) {
        printf ("stack doesnt exists\n");
    }
    s->arr[s->crt++] = value;
}

void print_stack (stack *s) {
    if (s == NULL) {
        printf ("stack doesnt exists\n");
    }
    for (int i = 0; i < s->crt; i++) {
        printf ("%d ", s->arr[i]);
        printf ("\n");
    }
}

