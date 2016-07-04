#include<stdio.h>
#include<conio.h>
void c(char num[3],int n)
{
if(n>0)
{
num[3-n]='0';
c(num,n-1);
}
else
printf("%s",num);
}
void main()
{
char num[4]={0};
int n;
clrscr();
scanf("%d",&n);
c(num,n);
getch();
}
