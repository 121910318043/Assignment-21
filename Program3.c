#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char ename[20];
    float salary;
};
struct Employee input()
{
    struct Employee e;
    printf("Enter employee id, employee name, employee salary");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.ename,20,stdin);
    e.ename[strlen(e.ename)-1]='\0';
    scanf("%f",&e.salary);
    return e;
}
void display(struct Employee e)
{
    printf("\n%d %s %f",e.id,e.ename,e.salary);
}
int main()
{
    int i;
    struct Employee E[5];
    for(i=0;i<=4;i++)
    {
        E[i]=input();
    }
    for(i=0;i<=4;i++)
    {
        display(E[i]);
    }
    return 0;
}
