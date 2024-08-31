//bubble sort:-arranging numbers in ascending order

#include<stdio.h>
void main()
{
    int a[10],s,i,j,temp;
    printf("Enter the size of an array:");
    scanf("%d",&s);
    printf("\nEnter the elements of array:");
    for(i=0;i<s;i++)
    {
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        for(j=0;j<s-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
}
}


