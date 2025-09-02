#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(3 * sizeof(int));
    if (arr == NULL) return 1;

    for (int i = 0; i < 3; i++) {
        arr[i] = (i+1) * 10;
    }

    printf("Αρχικός πίνακας: ");
    for (int i = 0; i < 3; i++) printf("%d ", arr[i]);
    printf("\n");

    // Μεγαλώνουμε τον πίνακα
    int *tmp = realloc(arr, 6 * sizeof(int));
    if (tmp == NULL) {
        printf("Αποτυχία realloc!\n");
        free(arr);
        return 1;
    }
    arr = tmp;

    // Συμπληρώνουμε τις νέες θέσεις
    for (int i = 3; i < 6; i++) arr[i] = (i+1) * 10;

    printf("Μεγαλωμένος πίνακας: ");
    for (int i = 0; i < 6; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
