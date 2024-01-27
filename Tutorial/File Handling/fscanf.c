#include <stdio.h>

#define MAX 10

int main()
{
    FILE *fptr = fopen("t2.txt", "r");

    char name[MAX];
    int age;
    char gender;

    int n = fscanf(fptr, "%s %d %c", name, &age, &gender);

    printf("\nName : %s Age : %d Gender : %c\n", name, age, gender);

    printf("%d\n", n);

    fclose(fptr);

    return 0;

}