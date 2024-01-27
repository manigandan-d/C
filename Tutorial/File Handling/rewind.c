#include <stdio.h>

#define MAX 20

int main()
{
    FILE *fptr = fopen("t11.txt", "r");

    char words[MAX];

    fseek(fptr, 4, SEEK_SET);

    fgets(words, MAX, fptr);

    printf("%s\n", words);

    rewind(fptr);

    fgets(words, MAX, fptr);

    printf("%s\n", words);

    fclose(fptr);

 

    return 0;
}