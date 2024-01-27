#include <stdio.h>

struct Company
{
    char *name;
    int age;
    int salary;
};

int main()
{
    int n, i;

    printf("Enter the Number of Employees : ");
    scanf("%d", &n);

    struct Company emp[n];

    for(i=0; i<n; i++)
    {
        printf("Enter the Name of the Employee %d : ", i+1);
        scanf("%s", emp[i].name);
        printf("Enter the Age of the Employee %d : ", i+1);
        scanf("%d", &emp[i].age);
        printf("Enter the Salary of the Employee %d : ", i+1);
        scanf("%d", &emp[i].salary);
    }

    for(i=0; i<n; i++)
    {
        printf("\nEmployee %d Name : %s\n", i+1, emp[i].name);
        printf("\nEmployee %d Age : %d\n", i+1, emp[i].age);
        printf("\nEmployee %d Salary : %d\n", i+1, emp[i].salary);
    }

    return 0;
}