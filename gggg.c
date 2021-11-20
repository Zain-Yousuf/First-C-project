#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter the value a :");
 scanf("%d",&a);
  printf("enter the value b :");
 scanf("%d",&b);
 printf("enter the value c :");
 scanf("%d",&c);
if (a>b&&a>c)
{printf("this is largest number a:%d\n",a);}
 else if(b>a&&b>c) 
 {printf("this is largest number b:%d\n",b);}
 else if(c>a&&c>b)
  {printf("this is largest number c:%d\n",c);}
  else
  printf("all number is equal:\n");
  
 }
