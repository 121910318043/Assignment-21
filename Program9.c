#include<stdio.h>
#include<string.h>
struct Student{
    char name[20];
    int roll;
    int phno;
    char grade;
};
void display(struct Student S[]);
struct Student input()
{
    struct Student S;
    printf("Enter Name of the Student: ");
    gets(S.name);
    printf("Enter Roll number of Student: ");
    scanf("%d",&S.roll);
    printf("Enter Phone number of Student: ");
    scanf("%d",&S.phno);
    fflush(stdin);
    printf("Enter grade of Student: ");
    scanf("%c",&S.grade);
    fflush(stdin);
    return S;
}
void display(struct Student S[])
{
    printf("\n %s %d %d %c",(*S).name,(*S).roll,(*S).phno,(*S).grade);
}
int main()
{
    int n;
    printf("Enter Number of Students: ");
    scanf("%d",&n);
    fflush(stdin);
    struct Student S[n];
    int i;
    for(i=0;i<n;i++)
    {
        S[i] = input();
    }
    for(i=0;i<n;i++)
    {
        display(&S[i]);
    }
    return 0;
}
