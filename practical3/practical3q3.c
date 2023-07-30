#include <stdio.h>
int main
{
 char ename[20];
 float bsalary,nsalary,Increment;

 printf("Enter The Employee Name ");
 scanf("%s" ,&ename);
 printf("Enter The Basic Salary ");
 scanf("%f",&bsalary);
 if(5000>bsalary)
Increment=bsalary*0.05;
else if(10000>bsalary)
Increment=bsalary*0.1;
else
Increment=bsalary*0.15;

 nsalary=bsalary+Increment;
 printf("Employee Name %s\n",ename);
 printf("New salary %.2f",nsalary);

}
