#include<stdio.h>
#include<stdlib.h>
int partition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-1;

    for(int j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    i++;

    int t=a[i];
    a[i]=a[high];
    a[high]=t;
    return i;
}
void quicksort(int a[],int low,int high)
{
    if(low < high)
    {
        int pidx=partition(a,low,high);

        quicksort(a,low,pidx-1);
        quicksort(a,pidx+1,high);
    }
}
int main()
{
    int *a,n;
    printf("Enter the value of n:");
    scanf_s("%d",&n);
    a=(int *)malloc(n*sizeof(int));

    printf("\nEnter the elements of Array:-");
    for(int i=0;i<n;i++)
        scanf_s("%d",&a[i]);
    
    quicksort(a,0,n);

    printf("Printing Sorted Array:-");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    free(a);
}