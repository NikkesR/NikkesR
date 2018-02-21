#include<stdio.h>
#include<conio.h>
int main()
{
int n,temp,i,j,a[20];
clrscr();
printf("Enter the array of numbers");
scanf("%d",&n);
printf("Enter the numbers");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
printf("%d%d",a[i],i);
}
getch();
return 0;
}
