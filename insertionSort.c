#include <stdio.h>
#define max 100
int main()
{
  int n,a[max],i,j,temp;
  scanf("%d", &n);
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for (i=1;i<n;i++)
  {
    j=i;
    while(j>0&&a[j]<a[j-1])
    {
      temp=a[j];
      a[j]=a[j-1];
      a[j-1]=temp;
      j--;
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }

  return 0;
}
