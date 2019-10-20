//Spicy-Material
#include<stdio.h>
int main()
{
    int sm;
    scanf("%d",&sm);
    while(sm--)
    {
        int a,b,c=0,j;
        scanf("%d%d",&a,&b);
        for(j=1;j<=b;j++)
	    {
	        if(a%j>c)
	        c=a%j;
	     }
        printf("%d\n",c);
    }
}
