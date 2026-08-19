#include<stdio.h>
#include<conio.h>
void main()
{
int num,original,digit,reverse=0;
clrscr();
printf("enter number:");
scanf("%d",&num);
original=num;
while(num>0)
{
digit=num%10;
reverse=reverse*10+digit;
num=num/10;
}
if(original==reverse)
printf("palindrome");
else
printf("not palidrome");
getch();
}