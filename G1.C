#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter first number:");
scanf("%d",&a);
printf("enter second number:");
scanf("%d",&b);
printf("enter third number:");
scanf("%d",&c);
if(a>=b&&a>=c)
printf("maximum=%d",a);
else if(b>=a&&b>=c)
printf("maximum=%d",b);
else
printf("maximum=%d",c);
getch();
}
