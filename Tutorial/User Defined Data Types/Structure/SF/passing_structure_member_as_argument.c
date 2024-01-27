#include <stdio.h>

struct Company
{
    char *name;
    int age;
    int salary;
};

void input(char **name, int *age, int *salary)
{
    scanf("%s %d %d", *name, age, salary);
}

void output(char *name, int age, int salary)
{
    printf("\nEmployee Name : %s\n", name);
    printf("Employee Age : %d\n", age);
    printf("Employee Salary : %d\n", salary);
}

int main(int argc, char *argv[])
{
    struct Company emp;
    input(&emp.name, &emp.age, &emp.salary);
    output(emp.name, emp.age, emp.salary);
    
    return 0;
}