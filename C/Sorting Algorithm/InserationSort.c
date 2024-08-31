//insertion sort

#include<stdio.h>
void main()
{
    int a[10],s,i,j,k,temp;
    printf("Enter the size of an array:");
    scanf("%d",&s);
    printf("\nEnter the elements of an array:");
    for(i=0;i<s;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<s;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[j];
                a[j]=a[i];
                for(k=i;k>j;k--)
                {
                    a[k]=a[k-1];
                }
                a[k+1]=temp;
            }
            
        }
    }
    printf("\n");
    for(i=0;i<s;i++)
    {
        printf("\t%d",a[i]);
}
}

