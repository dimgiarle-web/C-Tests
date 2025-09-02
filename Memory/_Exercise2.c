#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = calloc(10, sizeof(int));
    if (arr == NULL) {
        printf("Αποτυχία calloc!\n");
        return 1;
    }

    printf("Αρχικές τιμές πίνακα με calloc:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]); // όλα πρέπει να είναι 0
    }
    printf("\n");

    free(arr);
    return 0;
}
