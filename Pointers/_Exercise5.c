#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Πόσα στοιχεία θέλεις; ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Σφάλμα στη δέσμευση μνήμης.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Δώσε στοιχείο %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Τα στοιχεία που έδωσες:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
