#include<stdio.h>
struct Student EnterDetails();
void DisplayPercentage(struct Student);
struct Student{
char name[20];
int roll_no;
float maths,physics,chemistry;
};
int main()
{
    struct Student S[5];
    for(int i=0;i<5;i++)
    {
        S[i]=EnterDetails();
        printf("\n");
    }
    for(int i=0;i<5;i++)
    {
        DisplayPercentage(S[i]);
        printf("\n");
    }
    return 0;
}
struct Student EnterDetails()
{
    struct Student T;
    printf("Enter Student Name : ");
    fgets(T.name,20,stdin);
    printf("Enter Student Rollno : ");
    scanf("%d",&T.roll_no);
    printf("Enter Physics,Chemistry,Maths Marks : ");
    scanf("%f%f%f",&T.physics,&T.chemistry,&T.maths);
    fflush(stdin);
    return T;
};
void DisplayPercentage(struct Student S)
{
    printf("Total percentage = %f%%",((S.maths+S.chemistry+S.physics)*100.0)/300.0);
}

