#include <stdio.h>
#include <conio.h>
int main(void) 
{
char str[10];
int n,i;
clrscr ();
printf("Enter the string: ");
scanf("%s",str);
n=strlen(str);
for(i=0;i<n;i++)
{
if(str[i]>='0' && str[i]<='9')
printf("\n YES");
else
printf("\n NO");
}
getch();
return 0;
}
