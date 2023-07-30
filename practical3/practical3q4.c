#include <stdio.h>
int main
{
 float r,d,c,a,convalue;

 printf("Enter The Circle Radius ");
 scanf("%f",&r);
 convalue=3.14159;
 a=convalue*r*r;
 printf("Circle Area is %.2f",a);
 d=2*r;
 printf("\nCircle Diameter is %.2f\n ",d);
 c=d*convalue;
 printf("Circle Circumference is %.2f",c);

}
