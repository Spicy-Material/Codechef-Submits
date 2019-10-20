//spicymaterial
#include <stdio.h>

int main(void) {
	// your maxode goes here
int t;
	scanf("%d",&t);
	if(t<=100)
	{
	while(t!=0)
	{
	    int n,i,j,count,max;
	    int a[101];
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	        scanf("%d",&a[i]);
        max=1;
        count=1;
        if(a[count]<a[count-1])
            max+=1;
        count+=1;
        if(a[count]<a[count-1] && a[count]<a[count-2])
           max+=1;
        count+=1;
        if(a[count]<a[count-3] && a[count]<a[count-1] && a[count]<a[count-2])
            max+=1;
        count+=1;
        if(a[count]<a[count-3] && a[count]<a[count-1] && a[count]<a[count-2] && a[count]<a[count-4])
            max+=1;
        count+=1;
        if(a[count]<a[count-3] && a[count]<a[count-1] && a[count]<a[count-2] && a[count]<a[count-4] && a[count]<a[count-5])
            max+=1;
        count+=1;
        for(count=count;count<n;count++)
            if(a[count]<a[count-3] && a[count]<a[count-1] && a[count]<a[count-2] && a[count]<a[count-4] && a[count]<a[count-5])
                max+=1;
            count+=1;
            
        printf("%d\n",max);
        t--;
	}
	}
	
	return 0;
}
