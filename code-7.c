#include <stdio.h>
int main()
{
    int p,t,r;
    printf("enter period of the year:");
    scanf("%d",&p);
    printf("enter time:");
    scanf("%f",&t);
    printf ("enter rate");
    scanf("%d",&r);
    printf("the simple interest:%d",(p*t*r)/100);
    return 0;
}
