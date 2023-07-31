#include<stdio.h>

void sort (int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[j-1]>arr[j])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("SORTED ARRAY:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    printf("ENTER ARRAY LENGTH:");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("ENTER ARRAY:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
}
