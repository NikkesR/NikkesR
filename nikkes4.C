#include<stdio.h>
#include<conio.h>
int main()
{
char a;
clrscr();
printf("Enter the letter");
scanf("%c",&a);
if((a>='a')&&(a<='z'))
printf("alphabet");
else
printf("not alphabet");
getch();
return 0;
}
