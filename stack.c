#include<stdio.h>
int a[50],top=-1,item=0;
int max_size;
void push();
void pop();
void peek();
void display();
void main()
{
printf("Enter the maximum size of array:\n");
scanf("%d",&max_size);
int choice;
while(choice!=5)
{
printf("\n 1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
printf("enter the choice:");
scanf("%d",&choice);
if(choice==1)
{
push();
}
else if(choice==2)
{
pop();
}
else if (choice==3)
{
peek();
}
else if (choice==4)
{
display();
}
}
}
void push()
{
printf("enter the number to be pushed:\n");
scanf("%d",& item);
if (top>max_size-1)
{
printf("OVERFLOW");
}
else
{
top++;
a[top]=item;
}
}
void pop()
{
if (top==-1)
{
printf("UNDERFLOW\n");
}
else
{
item=a[top];
top--;
}
}
void peek()
{
if(top==-1)
{
printf("UNDERFLOW\n");
}
else
{
printf("%d",a[top]);
}
}
void display()
{
int i;
if(top==-1)
{
printf("stack element is empty\n");
}
else
{
printf("the stack element is\n");
for(i=top;i>0;i--)
{
printf("%d\t",a[i]);
}
}
}





