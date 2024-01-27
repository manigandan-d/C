#include <stdio.h>

#define MAX 20

int main()
{
    FILE *fptr = fopen("t11.txt", "r");

    char word[MAX];

    fseek(fptr, 4, SEEK_SET);

    fgets(word, MAX, fptr);

    printf("%s\n", word);

    fclose(fptr);

    return 0;
}