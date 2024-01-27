#include <stdio.h>

struct Company
{
    char *name;
    int age;
    int salary;
};

int main()
{
    struct Company emp = {"Mani", 20, 50000};

    struct Company *ptr = &emp;

    printf("\nEmployee Name : %s\n", ptr->name);
    printf("Employee Age : %d\n", ptr->age);
    printf("Employee Salary : %d\n", ptr->salary);

    return 0;
}