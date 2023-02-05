#include<stdio.h>
struct Time inputTime();
void difference(struct Time,struct Time);
struct Time
{
int hr,min,sec;
};
struct Time inputTime()
{
    struct Time T;
    printf("Enter Hours : ");
    scanf("%d",&T.hr);
    printf("Enter Minutes : ");
    scanf("%d",&T.min);
    printf("Enter Seconds : ");
    scanf("%d",&T.sec);
    return T;
}
void difference(struct Time T1,struct Time T2)
{
    struct Time Temp;
    Temp.hr = T1.hr - T2.hr;
    Temp.min = T1.min - T2.min;
    Temp.sec = T1.sec - T2.sec;
    if(Temp.sec<0)
    {
        Temp.min = Temp.min - 1;
        Temp.sec = 60 + Temp.sec;
    }
    if(Temp.min < 0)
    {
        Temp.hr = Temp.hr - 1;
        Temp.min = 60 + Temp.min;
    }
    if(Temp.hr<0)
    {
        Temp.hr = 24 + Temp.hr;
    }
    printf("%dHr %dMin %dSec",Temp.hr,Temp.min,Temp.sec);
}
int main()
{
    struct Time T1,T2;
    T1 = inputTime();
    T2 = inputTime();
    difference(T1,T2);
    return 0;
}
