#include <stdio.h>

struct Student
{
    char *name;
    int rollN0;
    int marks[4];
};

int main()
{
    struct Student s = {"Mani", 31, {100, 97, 91, 92}};

    printf("\nName of the Student : %s\n", s.name);
    printf("Roll Number of the Student : %d\n", s.rollN0);
    printf("Computer Science Mark : %d\n", s.marks[0]);
    printf("Maths Mark : %d\n", s.marks[1]);
    printf("Physics Mark : %d\n", s.marks[2]);
    printf("Chemistry Mark : %d\n", s.marks[3]);

    return 0;
}