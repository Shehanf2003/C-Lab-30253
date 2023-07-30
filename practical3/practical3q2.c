#include <stdio.h>
int main
{
    int num1,num2,num3,max,mini;
    printf("Enter The Three Numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
            max=num1;
        else
            max=num3;
    }
       else
       {
           if(num2>num3)
            max=num2;
            else
            max=num3;
       }
    if(num1<num2)
    {
        if(num1<num3)
            mini=num1;
            else
            mini=num3;
    }
        else
        {
            if(num2>num3)
                mini=num2;
            else
                mini=num3;
        }
    printf("The Largest Number is%d\n ",max);
    printf("The Smallest Number is%d",mini);

}
