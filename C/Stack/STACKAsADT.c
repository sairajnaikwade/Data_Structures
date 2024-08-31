// Implementation of Stack ADT using array

#include<stdio.h>
int a[5],top=-1,s=5;
void push();
void pop();
void display();
void main()
{	
    int ch,ich;
    do{
        printf("1.Push\t2.Pop\t3.Display\t4.Exit\nEnter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1://insertion
              
                push();
               break;
              
        case 2://deletion
               pop();
               break;

        case 3://display
               display();
               break;

        case 4://exit
               break;
        
        default:printf("\nWrong choice");
    }
    }while(ch<4);
}
void push()  //insertion case
{
  
    if(top==s-1)
    {
      printf("Stack overflow\n\n");
    }else
    {
        top++;
        printf("\nEnter the element:");
        scanf("%d",&a[top]); 
       
    }
 
     
}

void pop()  //deletion case 
{
    if(top==-1)
    {
        printf("Stack underflow\n\n");
     
    }else{
        printf("The element %d is deleted.\n\n",a[top]);
        top--;
    }
    
}

void display()  //display case 
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty.\n\n");
    }
    else{
         for(i=top;i>=0;i--)
         {
            printf("\t%d",a[i]);
         }
         printf("\n");
    }
}


