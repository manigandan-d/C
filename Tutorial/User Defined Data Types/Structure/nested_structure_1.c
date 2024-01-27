#include <stdio.h>

struct Marks
{
    int cs, m, p, c;
};

struct Student
{
    char *name;
    int rollN0;

    struct Marks m;
};

int main()
{
    struct Student s = {"Mani", 31, {100, 97, 91, 92}};

    printf("\nName of the Student : %s\n", s.name);
    printf("Roll Number of the Student : %d\n", s.rollN0);
    printf("Computer Science Mark : %d\n", s.m.cs);
    printf("Maths Mark : %d\n", s.m.m);
    printf("Physics Mark : %d\n", s.m.p);
    printf("Chemistry Mark : %d\n", s.m.c);

    return 0;
}