#include <stdio.h>
int main()
{
 int a[50],n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]<0)
      printf("%d %d",a[i],(-a[i]));
      
  }
 return 0;
}
