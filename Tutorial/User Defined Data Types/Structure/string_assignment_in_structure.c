#include <stdio.h>
#include <string.h>

struct Company
{
    char name[10];
    int age;
    int salary;
};

int main()
{
    struct Company emp;

    strcpy(emp.name, "Mani");
    emp.age = 20;
    emp.salary = 50000;

    printf("\nEmployee Name : %s\n", emp.name);
    printf("Employee Age : %d\n", emp.age);
    printf("Employee Salary : %d\n", emp.salary);

    return 0;
}