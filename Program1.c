#include<stdio.h>
#include<string.h>
//Define a structure Employee with member variables id, name, salary.
struct Employee{
    int EmployeeId;
    char Employee_name[30];
    float Employee_salary;
};
int main()
{
    int i;
    struct Employee E1;
    E1.EmployeeId=1;
    strcpy(E1.Employee_name,"Suraj");
    E1.Employee_salary = 10000.f;
    printf("%d %s Rs%0.2f/-",E1.EmployeeId,E1.Employee_name,E1.Employee_salary);

    return 0;
}
