#include <stdio.h>
#include <stdlib.h>

struct Company
{
    char *name;
    int age;
    int salary;
};

struct Company *input()
{
    struct Company *emp = malloc(sizeof(struct Company));

    scanf("%s %d %d", &emp->name, &emp->age, &emp->salary);

    return emp;
}

void output(struct Company *emp)
{
    printf("\nEmployee Name : %s\n", emp->name);
    printf("Employee Age : %d\n", emp->age);
    printf("Employee Salary : %d\n", emp->salary);
}

int main(int argc, char *argv[])
{
    struct Company *emp = input();
    output(emp);
    
    return 0;
}