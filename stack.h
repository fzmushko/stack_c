struct stack {
    int size;
    int crt;
    int* arr;
};

typedef struct stack stack;

stack * init_stack (int size);
void remove_stack (stack *s);

