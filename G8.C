#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
int a=0,b=1,c;
clrscr();
printf("enter the number of term;");
scanf("%d",&n);
printf("%d%d",a,b);
for(i=3;i<=n;i++)
{
c=a+b;
printf("\n%d",c);
a=b;
b=c;
}
getch();
}