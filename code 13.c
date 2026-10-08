#include <stdio.h>
int main()
{
    int a;
    printf("type your age");
    scanf("%d",&a);
    if (a>=19)
    {
        printf("eligible for vote");
    }
    else
    {
        printf("not eligible for vote");
    }
    return 0;
}
