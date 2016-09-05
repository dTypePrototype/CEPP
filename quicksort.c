#include<stdio.h>
void quicksort(int[100],int,int);
void main()
{
    int x[100],i,size;
    printf("Enter size\n");
    scanf("%d",&size);
    printf("\nEnter elements to be sorted\n");
    for(i=0;i<size;i++)
    scanf("%d",&x[i]);

    quicksort(x,0,size-1);

    printf("\nSorted array\n");
    for(i=0;i<size;i++)
        printf("%d ",x[i]);

}

void quicksort(int x[100],int first,int last)
{

    int i,j,pivot,temp;

    if(first<last)
    {
        i=first;
        pivot=first;
        j=last;

        while(i<j)
        {
            while(x[i]<x[pivot] && i<last)
                i++;
            while(x[j]>x[pivot])
                j--;
            if(i<j)
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;

            }
        }
        temp=x[pivot];
        x[pivot]=x[j];
        x[j]=temp;
        quicksort(x,first,j-1);
        quicksort(x,j+1,last);

    }
}
