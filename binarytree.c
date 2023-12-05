#include<stdio.h>
void main()
{
int limit,position,parent,rightchild,leftchild;
printf("enter the limit\n");
scanf("%d",&limit);
int a[limit];
printf("enter the elements of tree\n");
for(int i=1;i<=limit;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position of the node\n");
scanf("%d",&position);

parent=position/2;
if(parent<1)
{
printf("no parent\n");
}
else
{
printf("the parent of position %d is %d\n",position,a[parent]);
}
leftchild=2*position;
if(leftchild>limit)
{
printf("No left child is present\n");
}
else
{
printf("the left child of position %d is %d\n",position,a[leftchild]);
}
rightchild=(2*position)+1;
if(rightchild > limit)
{
printf("the right child is not present\n");
}
else
{
printf("the right child of position %d is %d\n",position,a[rightchild]);
}
}



