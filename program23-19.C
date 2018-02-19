#include<stdio.h>
#include<conio.h>
int main()
{
int a,b[3],small,i;
printf("Enter the number: ");
scanf("%d",&a);
printf("Enter the array elements: ");
for(i=1;i<=a;i++)
{
scanf("%d\n",b[i]);
}
small=b[0];
for(i=1;i<=a;i++)
{
if(b[i]<small)
{
small=b[i];
}
}
printf("Smallest in array is %d",larg);
getch();
return 0;
}
