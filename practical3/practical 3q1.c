#include <stdio.h>
int main
{
    int num1,num2,max;
    printf("Enter The Two Numbers");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    max=num1;
    else
    max=num2;
    printf("Highest Number is %d",max);

}
