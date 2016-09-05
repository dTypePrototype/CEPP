//program to check whether there are duplicate elements in array or not
#include<stdio.h>
#define MAX 100
int abs(int);
int main()
{
    int a[MAX],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[abs(a[i])]>0&&a[abs(a[i])]!=999)
        {
            a[abs(a[i])]*=-1;
        }
        else
        {
            if(a[abs(a[i])]==0)
            {
                a[abs(a[i])]=999;
            }
            else
            {
                c++;
            }
        }
    }
    if(c!=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return(0);
}
int abs(int a)
{
    if(a>0)
        return a;
    else
        return (a*-1);
}
