#include<stdio.h>
#include<conio.h>
int main()
{
 int i,a,b[100],n,temp,j;
 printf("enter the number");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
 scanf("%d",&b[i]);
 }
 for(a=i+1;a<n;a++)
 {
 scanf("%d",&b[a]);
 }
 if(b[i]>b[j])
 printf("%d",&b[a]);
 getch();
 return 0;
}
