#include <stdio.h>

/* echo: the first version of echo treats argv as an array of character pointers */
int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        /*  the standard requires that argv[argc] be a null pointer. */
        printf("%s%s", argv[i], (i < argc - 1) ? " " : "");
    }
    printf("\n");
    return 0;
}




