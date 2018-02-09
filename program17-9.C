#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e;
clrscr();
printf("Enter the first digit");
scanf("%d",&a);
printf("Enter the second digit");
scanf("%d",&b);
printf("Enter the third digit");
scanf("%d",&c);
d=((a*100)+(b*10)+(c*1));
scanf("%d",&d);
e=((a*a*a)+(b*b*b)+(c*c*c));
scanf("%d",&e);
if(d==e)
print("yes");
else
printf("no");
getch();
return 0;
}
