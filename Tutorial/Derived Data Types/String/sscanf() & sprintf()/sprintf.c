#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main(int argc, char *argv[])
{
    char details[MAX];
    char name[10] = "Mani";
    char gender = 'M';
    int age = 20;

    int n = sprintf(details, "Name : %s Age : %d Gender : %c", name, age, gender);

    printf("\n%s\n", details);

    printf("%d\n", n);


    return 0;
}