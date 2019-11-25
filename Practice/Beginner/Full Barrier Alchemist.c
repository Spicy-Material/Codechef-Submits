#include<stdio.h>
int main()
{
    int sm;
    scanf("%d",&sm);
    while(sm--)
    {
        int n,h,y1,y2,i,l,count=0;
        scanf("%d%d%d%d%d",&n,&h,&y1,&y2,&l);
        int t[n],x[n];
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&t[i],&x[i]);
        }
        for(i=0;i<n;i++)
        {
            if((t[i]==1 && (h-y1)<=x[i])||(t[i]==2 && y2>=x[i]))
               {
                    count=count+1;
               }
            else if(l>1)
            {
                count=count+1;
                l=l-1;
            }
            else
                break;
        }
        printf("%d ",count);

    }
    return 0;
}
