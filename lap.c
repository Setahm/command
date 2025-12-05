#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("argc = %d\n", argc);

    for (int i = 0; i < argc; i++) {
        // Get pointer to last slash or backslash
        char *name = strrchr(argv[i], '/');
        if (!name) name = strrchr(argv[i], '\\');
        // If found, move past it; else use full string
        name = name ? name + 1 : argv[i];

        printf("argv[%d] = %s\n", i, name);
    }

    return 0;
}
