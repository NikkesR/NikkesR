#include<stdio.h>
#include<conio.h>
int main ()
 {
 int a,b,c,d;
 clrscr();
 printf("Enter the three digit number: ");
 scanf("%d",&a);
 b=a/100;
 scanf("%d",&b);
 c=(a-(b*100))/10;
 scanf("%d",&c);
 d=((a-(b*100))-(c*10));
 scanf("%d",&d);
 printf("%d ",b+c+d);
 getch();
 return 0;
 }
