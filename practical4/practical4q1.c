#include <stdio.h>
int main ()
{
    int num,ans;
    printf("Enter The Number " );
    scanf("%d",&num);
    ans=num%2;
    if(ans==0)
     printf("%d is a even number",num);
    else
    printf("%d is a odde number",num);

}

