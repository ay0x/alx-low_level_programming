#include <stdio.h>

int main(int argc, char *argv[]) {
    int num_args = argc - 1;  // subtract 1 to exclude the program name from the count

    printf("%d\n", num_args);

    return 0;
}

