#include <stdio.h>
#include "stack.h"

int main () {
    stack* s = init_stack(10);
    if (s == NULL) {
        fprintf (stdout, "init test failed\n");
        return -1;
    }
    fprintf (stdout, "Init test passed\n");
    push_stack (s, 1);
    if (pop_stack(s) != 1) {
        fprintf (stdout, "push/pop test failed\n");         
    }
    remove_stack (s);





    return 0;
}