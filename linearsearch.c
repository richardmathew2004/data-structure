#include<stdio.h>
void main()
{
 int n,x,i,c=0,count=0;
 count++;count++;
 printf("enter the limit:");
 scanf("%d",&n);
 count++;
 int a[n];
 printf("enter the elements:\n");
 for(i=0;i<n;i++)
 {
 count++;
 scanf("%d",&a[i]);
 count++;
 }
 printf("enter the number to be checked:");
 scanf("%d",&x);
 count++;
 for(i=0;i<n;i++)
 {
 count++;
 if(a[i]==x)
 {
 count++;
 c++;
 break;
 }
 }
 if(c==1)
 {
 count++;
 printf("\nthe number is present in the array");
 }
 else
 {
 printf("\nthe element is not found");
 }
 count=count+2;
 printf("\ntime complexity=%d",count);
 printf("\nspace complexity=%d",(5*4)+4*n);
 }
