#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    bool b = true;
    const float pi = 314E-2;

    const char c = 'A';
    const char text = 'A';

    printf("float, %f!\n", pi);
    printf("char, %c!\n", c);
    printf("bool, %d!\n", b);

    return EXIT_SUCCESS;
}
