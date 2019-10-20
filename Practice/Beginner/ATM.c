//spicymaterial
#include <stdio.h>

int main()
{
    int a;
    float b;
	scanf("%d",&a);
	scanf("%f",&b);

	if ((a%5==0)&&(a+0.50<=b))
	{

	    b=(b-a)-0.50;
	    printf("%.2f",b);
	}
	else
	
	 printf("%.2f",b);
	
	return 0;
}

