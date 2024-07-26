//binary search
#include<stdio.h>
void main()
{
int a[10],i,s,key;
printf("Enter the size of an array:");
scanf("%d",&s);
int low=0,high=s-1,mid;
printf("\nEnter the array elements:");
for(i=0;i<s;i++)
{
 printf("\na[%d] = ",i);
 scanf("%d",&a[i]);
}
printf("\nEnter elements for search:");
scanf("%d",&key);
while(low<=high)
  {
    mid=(low+high)/2;
    if(a[mid]==key)
    {
      printf("\na[%d] =%d",mid,a[mid]);
      break;
    }else if(a[mid]<key)
    {
      low=mid+1;
    }else
    {
      high=mid-1;
    }
}
if (low>high)
    {
        printf("\nElement %d not found in the array.", key);
    }
}


