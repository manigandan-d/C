#include <stdio.h>

#define MAX 10

int main()
{
    FILE *fptr = fopen("t2.txt", "w");
    
    char name[MAX] = "Mani";
    int age = 20;
    char gender = 'M';

    int n = fprintf(fptr, "%s %d %c", name, age, gender);

    printf("%d\n", n);

    fclose(fptr);

    return 0;

}