#include<stdio.h>
void main()
{
int t,i,j,limit;
printf("enter the limit");
scanf("%d",&limit);
int a[10];
printf("enter the array");
for(int i=0;i<limit;i++)
{
scanf("%d",&a[i]);
}
printf("array brfore insertion sorting\n");
for(int i=0;i<limit;i++)
{
printf("%d\t",a[i]);
}
for(i=1;i<limit;i++)
{
j=i;
while((a[j]<a[j-1])&&(j>=0))
{
t=a[j];
a[j]=a[j-1];
a[j-1]=t;
j=j-1;
}
}
printf("\narray after insertion sorting\n");
for(int i=0;i<limit;i++)
{
printf("%d\t",a[i]);
}
}

