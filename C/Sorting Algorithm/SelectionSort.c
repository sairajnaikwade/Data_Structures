//selection short

#include<stdio.h>
void main()
{
    int a[10],i,j,n,temp,k,flag,ch=1,nc=0;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("\nEnter the elements of an array:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe unsorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {   
        if(ch<n)
        {
        printf("\n\nPass %d:\n",ch);
        }
         flag=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                flag++;
               for(k=0;k<n;k++)
            {
                printf("%d\t",a[k]);
            }
            printf("\n");
            } 
        }
        if(ch<n)
        {
         printf("\nNo.of comparison in pass %d= %d",ch,flag);
         ch++;
        }
        nc+=flag;
    }
    printf("\nTotal no.of comparison = %d",nc);
    printf("\n");
    printf("\n\nSorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
}
}


