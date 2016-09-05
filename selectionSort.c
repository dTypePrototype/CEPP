#include<stdio.h>
#include<conio.h>
#define MAX 100
void swap(int *,int *);
int main()
{
    int a[MAX],n,temp,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
                    for(j=i+1;j<n;j++)
                    {
                                      if(a[i]>a[j])
                                      {
                                                   swap(&a[i],&a[j]);

                                      }
                    }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return(0);
}
void swap(int *p, int *q)
{
     int temp;
     temp=*p;
     *p=*q;
     *q=temp;
}
