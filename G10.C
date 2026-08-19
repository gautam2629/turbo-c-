#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,total=1;
clrscr();
for(i=1;i<=10;i++)
{
printf("enter number%d:",i);
scanf("%d",&num);
total=total*num;
}
printf("total=%d",total);
getch();
}


