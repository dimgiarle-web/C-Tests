#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;

    printf("Η διεύθυνση του x: %p\n", (void*)&x);
    printf("Η τιμή του x μέσω δείκτη: %d\n", *p);

    return 0;
}
