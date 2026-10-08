#include <stdio.h>
int main ()
{
    int isPrime = 1;
    for(int j = 2; j < 32; j++)
    {
        if(32 % j == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1){
        printf("is Prime");
    }
    else
    {
        printf("is not Prime");
    }
    return 0;
}
