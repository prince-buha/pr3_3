#include<stdio.h>
#include<conio.h>
void main()
{
 int i=0,n,n1,n2,sum;
 clrscr();
 printf("enter a number");
 scanf("%d",&n);
 n2=n%10;
 while(n>=10){
	n=n/10;
 }
 n1=n;
 sum=n1+n2;
 printf("the sum is %d",sum);
 getch();



 }


