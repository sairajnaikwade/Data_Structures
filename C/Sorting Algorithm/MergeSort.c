//Merge Sort...
#include <stdio.h>

void Read_Array(int arr[20], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] =", i);
        scanf("%d", &arr[i]);
    }
}

void Print_Array(int arr[], int size)
{
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n\n");
}

void conquer(int arr[], int low, int mid, int high)
{
    int brr[high-low+1], i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            brr[k] = arr[i];
            i++;
        }
        else
        {
            brr[k] = arr[j];
            j++;
        }
        k++;
    }
if(j>high){
    while (i <= mid)
    {
        brr[k] = arr[i];
        i++;
        k++;
    }
}
if(i>mid){
    while (j <= high)
    {
        brr[k] = arr[j];
        j++;
        k++;
    }
}
    for (i = low; i <= high; i++)
    {
        arr[i] = brr[i];
    }
}

void divide(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        divide(arr, low, mid);
        divide(arr, mid + 1, high);
        conquer(arr, low, mid, high);
    }
}

int main()
{
    int arr[20], size;
    printf("Enter Array Size: ");
    scanf("%d", &size);
    Read_Array(arr, size);
    divide(arr, 0, size - 1);
    printf("Sorted Array: ");
    Print_Array(arr, size);
return 0;
}
