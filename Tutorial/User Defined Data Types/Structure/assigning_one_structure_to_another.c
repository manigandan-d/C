#include <stdio.h>

struct Company
{
    char *name;
    int age;
    int salary;
};

int main()
{
    struct Company emp1 = {"Mani", 20, 50000};
    struct Company emp2 = emp1;

    printf("\nEmployee 1 Name : %s\n", emp1.name);
    printf("Employee 1 Age : %d\n", emp1.age);
    printf("Employee 1 Salary : %d\n", emp1.salary);

    printf("\nEmployee 2 Name : %s\n", emp2.name);
    printf("Employee 2 Age : %d\n", emp2.age);
    printf("Employee 2 Salary : %d\n", emp2.salary);

    return 0;
}