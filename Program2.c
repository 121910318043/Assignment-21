#include<stdio.h>
#include<string.h>
struct Employee input();
/*Write a function to take input Employee data from the User*/
struct Employee{
    int id;
    char name[30];
    float salary;
};
int main()
{
    struct Employee E[5];
    for(int i=0;i<5;i++)
    {
        E[i] = input();
    }
    for(int i=0;i<5;i++)
    printf("%d %s %f\n", E[i].id,E[i].name,E[i].salary);
    return 0;
}
 struct Employee input()
{
    struct Employee E;
    printf("Enter Employee Id,name,salary");
    scanf("%d",&E.id);
    fflush(stdin);
    fgets(E.name,30,stdin);
    E.name[strlen(E.name)-1]='\0';
    scanf("%f",&E.salary);
    return E; 
}
