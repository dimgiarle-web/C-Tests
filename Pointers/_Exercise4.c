#include <stdio.h>

int find_max(int *arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int numbers[6] = {12, 45, 7, 89, 23, 56};
    int max = find_max(numbers, 6);

    printf("Μέγιστος αριθμός = %d\n", max);
    return 0;
}
