#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("enter the value");
scanf("%d",&a);
if(a>0)
printf("positive");
elseif(a<0)
printf("negative");
else
printf("zero");
getch();
return 0;
}
