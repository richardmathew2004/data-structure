#include<stdio.h>
void main()
{
int m,n,limit,i,j;
printf("enter the  number of rows and column");
scanf("%d%d",&m,&n);
int a[m][n];
printf("enter the matrix:");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
scanf("%d",& a[i][j]);
}
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
printf("%d\t", a[i][j]);
}
printf("\n");
}
printf("enter the limit");
scanf("%d",&limit);
struct sparse
{
int row,col,val;
}sp[limit];
int k=1,count=0;
for( i=0;i<m;i++)
{
for( j=0;j<n;j++)
{
if(a[i][j]!=0)
{
sp[k].row=i;
sp[k].col=j;
sp[k].val=a[i][j];
count++;
k++;
}
}
sp[0].row=m;
sp[0].col=n;
sp[0].val=count;
}
printf("\n values in tuple matrix is:");
printf("\n Row: Column: Value:\n");
for(i=0;i<k;i++)
{
printf("\n%d\t%d\t%d\n",sp[i].row,sp[i].col,sp[i].val);
}
}

