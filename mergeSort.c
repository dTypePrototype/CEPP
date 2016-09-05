#include<stdio.h>
#define max 100
void MergeSort(int *,int,int);
void Merge(int *,int,int,int);
int main()
{
    int a[max],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    MergeSort(a,0,(n-1));
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void MergeSort(int *arr,int low, int high)
{
    int mid;
    mid =(low+high)/2;
    if(low<high)
    {
        MergeSort(arr,low,mid);
        MergeSort(arr,(mid+1),high);
        Merge(arr,low,mid,high);
    }
    return;
}
void Merge(int *arr,int low, int mid, int high )
{
    int tempArr[high-low+1];
    int p=0,lpos=low,rpos=mid+1,i;
    while((lpos<=mid)&&(rpos<=high))
    {
        if(arr[lpos]<arr[rpos])
        {
            tempArr[p++]=arr[lpos++];
        }
        else
        {
            tempArr[p++]=arr[rpos++];
        }
    }
    while(lpos<=mid)
    {
        tempArr[p++]=arr[lpos++];
    }
    while(rpos<=high)
    {
        tempArr[p++]=arr[rpos++];
    }
    for(i=0;i<p;i++)/*here I am copying back the sorted array to original array*/
    {
        arr[i+low]=tempArr[i];
    }
    return;
}
