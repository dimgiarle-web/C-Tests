#include <stdio.h>

int main() {
    int x = 100;
    int *p = &x;
    int **pp = &p;

    printf("Τιμή του x μέσω διπλού δείκτη: %d\n", **pp);
    return 0;
}
