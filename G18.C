#include<stdio.h>
#include<conio.h>
void main()
{
int a=1;
clrscr();
do
{
if(a==6)
{
continue;
}
printf("%d",a);
a++;
}
while(a<=5);
getch();
}