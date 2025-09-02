#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Πόσα στοιχεία θέλεις; ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Αποτυχία malloc!\n");
        return 1;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        printf("Δώσε στοιχείο %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Άθροισμα στοιχείων = %d\n", sum);

    free(arr);
    return 0;
}
