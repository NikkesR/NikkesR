#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr()
printf("Enter the value");
scanf("%d",&a);
if(a>0)
printf("positive");
else if(a<0)
printf("negative");
else
printf("zero");
getch();
return 0;
}
