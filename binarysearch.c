#include<stdio.h>
void main()
{
 int n,x,i,c=0,count=0,j=0,temp,left=0;
 count++;count++;count++;
 printf("enter the limit:");
 scanf("%d",&n);
 count++;
 int right=n-1,middle=(left+right)/2;
 count++;
 count++;
 int a[n];
 printf("enter the elements:\n");
 for(i=0;i<n;i++)
 {
 count++;
 scanf("%d",&a[i]);
 count++;
 }
 for(i=0;i<n;i++)
 {
 count++;
 for(j=i+1;j<n;j++)
 {
 count++;
  if(a[i]>a[j])
  {
  count++;
  temp=a[i];count++;
  a[i]=a[j];count++;
  a[j]=temp;count++;
  }
  }
  }
  printf("sorted array is:\n");
  for(i=0;i<n;i++)
  {
  count++;
  printf("%d\t",a[i]);
  count++;
  }
 printf("enter the number to be checked:");
 scanf("%d",&x);
 count++;
 while (left<=right)
 {
 if(x==a[middle])
 {
 c++;
 break;
 }
 else if(x<a[middle])
 {
 right=middle-1;
 middle=(left+right)/2;
 count++;count++;
 }
 else if (x>a[middle])
 {
 left=middle+1;
 middle=(left+right)/2;
 count++;count++;
 }
 }
 count++;
 if(c==1)
 {
 printf("\nthe number is present in the array");
 }
 else
 {
 printf("\nthe element is not found");
 }
 count=count+2;
 printf("\ntime complexity=%d",count);
 printf("\nspace complexity=%d",(4*10)+4*n);
 }
 
