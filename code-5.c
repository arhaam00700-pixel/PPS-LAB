#include <stdio.h>
int main ()
{
    int a;
    int b;
    int area;
    printf("enter length of rectangle:");
    scanf("%d",&a);
    printf("enter breadth of rectangle:");
    scanf("%d",&b);
    area = a * b;
    printf("the area of rectangle %d",area);
    return 0;

}
