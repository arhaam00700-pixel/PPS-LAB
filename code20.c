#include <stdio.h>
int main ()
{
    float marks;
    printf("Enter marjs (0-100):");
    scanf("%f",&marks);
    if (marks<0 || marks>100){
            printf("invalid marks ./n");

}
else if (marks <40){
    printf("Result: Fail/n");
    printf("grade F/n");
}
else if(marks <90){
    printf("Result:passed withdistinction/n");
    printf("Grade:A+/n");
}
else if (marks<80){
    printf("Result: passed/n");
    printf("Grate:B+/n");
}



