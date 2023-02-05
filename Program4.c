#include<stdio.h>
#include<string.h>
//Write a function to find the highest salary employee from a given array of 10 employees.
struct Employee{
    int id;
    char name[20];
    float salary;
};
struct Employee input()
{
    struct Employee E;
    printf("Enter Employee Id , Name , Salary");
    scanf("%d",&E.id);
    fflush(stdin);
    fgets(E.name,20,stdin);
    E.name[strlen(E.name)-1] = '\0';
    scanf("%f",&E.salary);
    return E;
}
void GetHighestSalaryEmployee(struct Employee E[])
{
    int i;
    float Max=0;
    char emp[20];
    for(i=0;i<10;i++)
        if(Max < E[i].salary)
        {
            Max = E[i].salary;
            strcpy(emp,E[i].name);
        }
    printf("Highest salary Employee = %s",emp);
}
int main()
{
    int i;
    struct Employee E[10];
    for(i=0;i<=9;i++)
        E[i]=input();
    GetHighestSalaryEmployee(E);
    return 0;
}
