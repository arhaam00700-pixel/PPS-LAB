#include <stdio.h>
int main()
{
    int a,b;
    printf("type the cost price of the product");
    scanf("%d",&a);
    printf("type of selling price of the product");
    scanf("%d,&b");
    if (b==a)
    {
        printf("no profit no loss");
    }
    else if (b>a)
    {
        printf("profit");
    }
    else
    {
        printf("loss");
    }
    return 0;

}

