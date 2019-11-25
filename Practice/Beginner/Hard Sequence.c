#include<stdio.h>
int main()
{
    int sm;
    scanf("%d",&sm);
    while(sm--)
    {
        int i,j;
        long int n;
        scanf("%lu",&n);
        int arr[n];
        arr[0]=0;
        arr[1]=0;
        for(i=0;i<n;i++)
        {
            for(j=i-1;j>=0;j--)
            {
                if(arr[i]==arr[j])
                {
                    arr[i+1]=i-j;
                    break;
                }
                else
                {
                    arr[i+1]=0;
                }
            }
        }
        int count=0;
        for(i=n;i>=0;i--)
        {
            if(arr[n-1]==arr[i-1])
            {
                count++;
            }
        }
        printf("%d ",count);
    } 
    return 0;
}
