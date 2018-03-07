#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("Enter the two numbers: ");
scanf("%d %d",&a,&b);
c=a*b;
scanf("%d",&c);
if(c%2==0)
printf("Even");
else
printf("Odd");
getch();
return 0;
}
