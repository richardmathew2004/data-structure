#include <stdio.h>
int rear=-1,front=0,a[50],item,max_size;
void enqueue();
void dequeue();
void peek();
void display();
void main() {
    int choice;
    printf("enter the limit:");
    scanf("%d",&max_size);
    while(choice!=5)
    {
     printf("\n1.enqueue 2.dequeue 3.peek 4.display 5.exit\nEnter the choice:");
     scanf("%d",&choice);
     switch(choice)
      {
        case 1:
        {
            enqueue();
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            display();
            break;
        }
      }
    }
}
void enqueue()
{
    if(rear==max_size-1){
        printf("overflow\n");
    }
    else
    {
        rear=rear+1;
        printf("enter the number:");
        scanf("%d",&item);
        a[rear]=item;
    }
}
void dequeue()
{
if (rear==front)
{
item=a[front];
printf("the dequeued element is:%d",item);
front=0;
rear=-1;
}
    else if(rear<front)
    {
        printf("underflow\n");
    }
    else
    {
        item=a[front];
        printf("the dequeued element is:%d",item);
        front++;
    }
}
void peek()
{if(front>rear)
printf("Underflow");
else
    printf("front element=%d\n",a[front]);
}
void display()
{
    if(rear!=-1)
{
printf("the elements in array:");
for(int i=front;i<=rear;i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
else
printf("underflow\n");
}
