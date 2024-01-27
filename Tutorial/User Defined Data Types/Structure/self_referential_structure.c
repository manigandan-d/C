#include <stdio.h>

struct Company
{
    char *name;
    int age;
    int salary;
    struct Company *ptr;
};

int main()
{
    struct Company emp1 = {"Mani", 20, 50000, NULL};
    struct Company emp2 = {"Anbu", 18, 40000, NULL};

    emp1.ptr = &emp2;
    emp2.ptr = &emp1;

    printf("\nEmployee 1 Name : %s\n", emp1.ptr->ptr->name);
    printf("Employee 1 Age : %d\n", emp1.ptr->ptr->age);
    printf("Employee 1 Salary : %d\n", emp1.ptr->ptr->salary);

    printf("\nEmployee 2 Name : %s\n", emp2.ptr->ptr->name);
    printf("Employee 2 Age : %d\n", emp2.ptr->ptr->age);
    printf("Employee 2 Salary : %d\n", emp2.ptr->ptr->salary);

    return 0;
}