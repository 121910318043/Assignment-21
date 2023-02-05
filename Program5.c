#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[20];
    float salary;
};
struct Employee input(){
    struct Employee E;
    printf("Enter Employee Id , Name ,Salary");
    scanf("%d",&E.id);
    fflush(stdin);
    fgets(E.name,20,stdin);
    E.name[strlen(E.name)-1]='\0';
    scanf("%f",&E.salary);
    return E;
}
void SortBySalary(struct Employee E[])
{
    int i,j;
    struct Employee temp;
    for(i=0;i<=4;i++)
        for(j=i;j<=4;j++)
            {
                if(E[i].salary>E[j].salary)
                {
                    temp = E[i];
                    E[i] = E[j];
                    E[j] = temp;
                }
            }
}
void display(struct Employee E)
{
    printf("\n %d  %s  %f",E.id,E.name,E.salary);
}
int main()
{
    struct Employee E1[5];
    int i;
    for(i=0;i<=4;i++)
    {
        E1[i] = input();
    }
    for(i=0;i<=4;i++)
    {
        display(E1[i]);
    }
    printf("\n Sorted by Salary: \n");
    SortBySalary(E1);
    for(i=0;i<=4;i++)
    {
        display(E1[i]);
    }
    return 0;
}
