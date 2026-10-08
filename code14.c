#include<stdio.h>
int main()
{
    int year;
    printf("type your year");
    scanf("%d,&year");
    if (year%100==0)

    if (year%400==0)
        {
            printf("Leap year");
        }
        else
        {
            printf("Not Leap year");
        }
        else if(year%4==0)
        {
            printf("Leap year");
        }
        else
        {
            printf("not Leap year");
        }
        return 0;
}
