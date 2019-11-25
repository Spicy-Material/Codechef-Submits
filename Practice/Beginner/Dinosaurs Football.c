#include <stdio.h>

int main(void) {
  int sm;
  scanf("%d",&sm);
  while(sm--)
  {
    int n,k,p;
    scanf("%d%d",&n,&k);
    p=n-k;
    int a[n+1];
    int j;
    for(int i=p,j=0;i<=n;i++,j++)
    {
      a[j]=i;
    }
    for(int i=1,j=k+1;i<n-k;i++,j++)
    {
      a[j]=i;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);}
    }
  return 0;
}
