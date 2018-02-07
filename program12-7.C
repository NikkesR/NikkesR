#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e;
clrscr()
printf("enter the three digits number");
scanf("%d",&a);
b=a/100;
scanf("%d",&b);
c=((a-(b*100))/10);
scanf("%d",&c);
d=((a-(b*100)-(c*10));
scanf("%d",&d);
e=((d*100)+(c*10)+(b*1));
scanf("%d",&e);
if(a==e)
printf("yes");
else
printf("not");
getch();
return 0;
}
