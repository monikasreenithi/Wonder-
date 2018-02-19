#include<stdio.h>
#include<string.h>
struct employee
{
char name[50];
int roll;

}e;
int main()
{
printf("enter information:\n");
printf("\nenter name:\n");
scanf("%s",e.name);
printf("\nenter roll no:\n");
scanf("%d",&e.roll);
printf("display information:");
printf("name:");
puts(e.name);
printf("roll no:%d\n",e.roll);
int a[100],i,n,d;
int*big;
printf("enter dimension:");
scanf("%d",&d);
printf("\nenter %d dimension:",d);
for(i=0;i<d;i++)
scanf("%d",&a[i]);
big=&a[0];
n=0;
for(i=0;i<d;i++)
{
if(*big<a[i])
*big=a[i];
}
for(i=0;i<d;i++)
{
if(*big==a[i])
n++;
}
printf("\n the big is %d",*big);
if(n==1)
printf("\n%d occured only once",*big);
else
 printf("\n%d occured %d times",*big,n);
if(n>5)
printf("\n the employee is eligible ");
else
printf("/n the employee is not eligible");
return(0);
}
