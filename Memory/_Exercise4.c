#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;
    int capacity = 0;
    int length = 0;
    char ch;

    printf("Δώσε κείμενο (Enter για τέλος): ");

    while ((ch = getchar()) != '\n') {
        if (length + 1 > capacity) {
            capacity = (capacity == 0) ? 2 : capacity * 2;
            char *tmp = realloc(str, capacity * sizeof(char));
            if (tmp == NULL) {
                printf("Αποτυχία realloc!\n");
                free(str);
                return 1;
            }
            str = tmp;
        }
        str[length++] = ch;
    }
    if (str != NULL) str[length] = '\0'; // προσθέτουμε null-terminator

    printf("Κείμενο που δώθηκε: %s\n", str);

    free(str);
    return 0;
}
