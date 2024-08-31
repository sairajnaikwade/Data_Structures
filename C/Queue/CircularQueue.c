//circular queue
#include<stdio.h>
int queue[5],front=-1,rear=-1;
void enQueue()
{
    if(rear==-1 && front==-1)
    {
        rear=0;
        front=0;
        printf("Enter element:");
        scanf("%d",&queue[rear]);
    }else if((rear+1)%5==front)
    {
        printf("Circular queue is full");
    }else{
        rear=(rear+1)%5;
        printf("Enter element:");
        scanf("%d",&queue[rear]);
    }
}
void deQueue()
{
    if(rear==-1 && front==-1)
    {
        printf("Circular queue is empty");
    }else if(front==rear)
    {
        printf("Element %d is deleted",queue[front]);
        rear=-1;
        front=-1;
    }else{
        printf("Element %d is deleted",queue[front]);
        front=(front+1)%5;
    }
}
void display()
{
    int i;
    if(front==rear)
    {
        printf("Circular queue is empty");
    }else{
        for (i = front; i != (rear+1)%5; i = (i + 1) % 5)
        {
            printf("%d\t",queue[i]);
        }
    }
}
void main()
{
    int ch;
    do{
        printf("1.Insert element\t2.Delete element\t3.display\t5.Exit\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1://insertion
                   enQueue();
                   break;
        
            case 2://deletion
                   deQueue();
                   break;
            
            case 3://display
                   display();
                   break;

            default:printf("Wrong choice");
        }          
    }while(ch!=4);

}
