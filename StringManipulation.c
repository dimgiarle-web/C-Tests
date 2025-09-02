#include <stdio.h>   // για printf
#include <string.h>  // για τις συναρτήσεις string.h

int main() {
    char str1[50] = "Hello";   // Δημιουργία string str1 με περιεχόμενο "Hello"
    char str2[50] = "World";   // Δημιουργία string str2 με περιεχόμενο "World"
    char buffer[100];          // Buffer για προσωρινές πράξεις με strings

    // strlen: μετράει το μήκος του string (χωρίς το '\0')
    printf("Μήκος str1: %zu\n", strlen(str1));

    // strcpy: αντιγράφει το str1 μέσα στο buffer
    strcpy(buffer, str1);
    printf("Μετά την strcpy: %s\n", buffer);

    // strcat: προσθέτει (συγκολλάει) strings στο τέλος του buffer
    strcat(buffer, " ");   // Προσθέτει κενό
    strcat(buffer, str2);  // Προσθέτει το "World"
    printf("Μετά την strcat: %s\n", buffer);  // buffer = "Hello World"

    // strcmp: συγκρίνει δύο strings (λεξικογραφικά)
    if (strcmp(str1, str2) == 0) {
        printf("Τα str1 και str2 είναι ίδια\n");
    } else {
        printf("Τα str1 και str2 είναι διαφορετικά\n");
    }

    // strchr: ψάχνει για τον χαρακτήρα 'W' μέσα στο buffer
    char *p = strchr(buffer, 'W');
    if (p) {
        // Υπολογίζουμε index κάνοντας pointer arithmetic (p - buffer)
        printf("Το 'W' βρέθηκε στο index: %ld\n", p - buffer);
    }

    // strstr: ψάχνει για το substring "World" μέσα στο buffer
    char *q = strstr(buffer, "World");
    if (q) {
        printf("Το 'World' βρέθηκε: %s\n", q);  // Εμφανίζει το υπόλοιπο string από το "World"
    }

    // strncpy: αντιγράφει με "ασφάλεια" έως n χαρακτήρες
    char copy[10];  
    strncpy(copy, buffer, sizeof(copy) - 1);  // Αντιγράφει max 9 chars
    copy[sizeof(copy) - 1] = '\0';            // Προσθέτουμε '\0' χειροκίνητα
    printf("Μετά την strncpy: %s\n", copy);

    // strtok: κόβει string σε "tokens" με βάση διαχωριστή
    char text[] = "one two three four";  // String προς διάσπαση
    char *token = strtok(text, " ");     // Πρώτο token (διαχωρισμός με space)
    printf("Διάσπαση σε tokens:\n");
    while (token != NULL) {
        printf(" - %s\n", token);        // Εμφανίζει κάθε λέξη ξεχωριστά
        token = strtok(NULL, " ");       // Συνεχίζει για τα επόμενα tokens
    }

    return 0;
}
