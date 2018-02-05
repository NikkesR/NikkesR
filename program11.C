#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
    clrscr();
    printf("Enter the first number ");
    scanf("%d",&a);
    printf("Enter the second number ");
    scanf("%d",&b);
    c=a^b;
    printf("%d",c);
    getch();
    return 0;
 }   
