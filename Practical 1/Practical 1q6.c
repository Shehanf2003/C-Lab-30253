#include <stdio.h>
{
 char stname[20];
  int byear,age;
  printf("\nStudent Name ");
  scanf("%s",&stname);
  printf("Birthyear ");
  scanf("%d",&byear);
  age=2023-byear;
  printf("Student Name%s,Age%d",stname,age);

}
