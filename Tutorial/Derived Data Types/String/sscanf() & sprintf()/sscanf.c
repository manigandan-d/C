#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

int main(int argc, char *argv[])
{
    char details[MAX] = "Mani 20 M";
    char name[10];
    char gender;
    int age;

    int n = sscanf(details, "%s %d %c", name, &age, &gender);

    printf("\nName : %s Age : %d Gender : %c\n", name, age, gender);

    printf("%d\n", n);

    return 0;
}