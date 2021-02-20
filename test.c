#include <stdio.h>
#include "stack.h"

int main () {
    stack* s = init_stack(10);
    if (s == NULL) {
        fprintf (stdout, "init test failed\n");
        return -1;
    }
    fprintf (stdout, "Init test passed\n");
    remove_stack (s);





    return 0;
}