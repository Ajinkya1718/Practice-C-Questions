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
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    i++;

    int temp=a[i];
    a[i]=a[high];
    a[high]=temp;
    return i;
}
void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int pidx=partition(a,low,high);

        quicksort(a,low,pidx-1); //lower values
        quicksort(a,pidx+1,high); //larger values
    }
}
int main()
{
    int *a,n;
    printf("Enter total no. of values:");
    scanf_s("%d",&n);
    a=(int *)calloc(n,sizeof(int));
    
    printf("\nEnter the value of elements:-\n");
    for(int i=0;i<n;i++)
        scanf_s("%d",&a[i]);

    quicksort(a,0,n-1);

    printf("\nSorted Array:-\n");
    for(int i=0;i<n;i++)
        printf(" %d",a[i]);
    free(a);
}