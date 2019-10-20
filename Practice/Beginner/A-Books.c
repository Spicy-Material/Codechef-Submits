//Spicy-Material
#include<stdio.h>
int main()
{
    int sm;
    scanf("%d",&sm);
    while(sm--)
    {
        int i,j,n,count;
        int arr[100];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        int a[n];
        for(i=0;i<n;i++)
        {
            count=0;
            for(j=0;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    count=count+1;
                }
            }
            a[i]=count;
        }
        i=0;
        while(i<n)
        {
            printf("%d ",a[i]);
            i++;
        }
        printf("\n");
    }
    return 0;
}
