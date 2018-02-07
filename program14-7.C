#include<stdio.h>
#include<conio.h>
int main()
{
	 int a,b,c;
	printf("enter the first number");
	scanf("%d",a);
	printf("enter the second number");
	scanf("%d",&b);
	for(c=a;c<=b;c++)
	{
		(c%2==1);
		printf("%d\n",c);
	}
  getch();
  return 0;
}
