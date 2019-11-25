#include<stdio.h>
#include<string.h>
int main()
{
    int sm;
    scanf("%d",&sm);
    while(sm--)
    {
        char str[1000];
        int len,i,n=0;
        scanf("%s",str);
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]=='A'||str[i]=='D'||str[i]=='O'||str[i]=='P'||str[i]=='Q'||str[i]=='R'||str[i]=='a'||str[i]=='d'||str[i]=='o'||str[i]=='p'||str[i]=='q'||str[i]=='r')
                n++;
            if(str[i]=='B'||str[i]=='b')
                n=n+2;
        }
        printf("%d ",n);
    }
    return 0;
}
