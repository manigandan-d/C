#include <stdio.h>

int main() {
    char sentence[1000];

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Iterate through the characters of the sentence
    int i = 0;
    while (sentence[i] != '\0') {
        // Skip leading spaces
        while (sentence[i] == ' ') {
            i++;
        }

        // Print the word
        while (sentence[i] != ' ' && sentence[i] != '\0') {
            printf("%c", sentence[i]);
            i++;
        }

        // Move to the next word
        printf("\n");
    }

    return 0;
}
