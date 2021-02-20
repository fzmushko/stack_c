struct stack {
    int size;
    int crt;
    int* arr;
};

typedef struct stack stack;

stack * init_stack (int size);
void remove_stack (stack *s);
int is_empty_stack (stack *s);
int pop_stack (stack *s);
void push_stack (stack *s, int value);