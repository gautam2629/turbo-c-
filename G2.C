#include<stdio.h>
#include<conio.h>
void main()
{
int rollno;
float a,b,c,d,e;
float total,percentage;
clrscr();
printf("enter roll number:");
scanf("%d",&rollno);
printf("enter mark:");
scanf("%f",&a);
printf("enter mark:");
scanf("%f",&b);
printf("enter mark:");
scanf("%f",&c);
printf("enter mark:");
scanf("%f",&d);
printf("enter mark:");
scanf("%f",&e);
total=a+b+c+d+e;
percentage=total/5;
printf("\nroll number:%d",rollno);
printf("\ntotal marks:%f",total);
printf("\npercentage:%2f%%",percentage);
if(percentage>=35)
printf("\nresult	:pass");
else
printf("\nresult	:fail");
if(percentage>=75)
printf("\ngrade	:distinction");
else if(percentage>=60)
printf("\ngrade	:first class");
else if(percentage>=50)
printf("\ngrade	:second class");
else if(percentage>=35)
printf("\ngrade	:pass class");
else
printf("\ngrade	:fail");
getch();
}





