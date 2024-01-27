#include <stdio.h>

struct Company
{
    char *name;
    int age;
    int salary;
};

int main()
{
    struct Company emp;
    emp = (struct Company){"Mani", 20, 50000};

    printf("\nEmployee Name : %s", emp.name);
    printf("\nEmployee Age : %d", emp.age);
    printf("\nEmployee Salary : %d\n", emp.salary);

    return 0;
}
