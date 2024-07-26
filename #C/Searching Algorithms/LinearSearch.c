//Linear Search

#include<stdio.h>
void main()
 {
    int a[20],n,key,i,ch;
    do{
    int flag=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("\nEnter the elements of array:");
    for(i=0;i<n;i++)
    {
      printf("\na[%d] = ",i);
      scanf("%d",&a[i]);
    }
    printf("\nEnter element for search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
       if(key==a[i])
       {
         flag=1;
         break;
       }
    }
    if(flag==1)
    {
      printf("\na[%d] = %d",i,a[i]);
    }else
    {
      printf("\nInvalid Number");
    }
    printf("\nDo you want to continue ? Press 1 for yes:");
    scanf("%d",&ch);
    }while(ch==1);
}



