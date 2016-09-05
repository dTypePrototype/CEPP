#include<stdio.h>
#define MAX 100
int main()
{
    int n, a[MAX], i,j,temp;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return(0);
}
