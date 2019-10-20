//Spicy-Material
#include<stdio.h>
int main()
{
    int sm;
    int salary;
    scanf("%d",&sm);
    while(sm--)
    {
        scanf("%d",&salary);
        if(salary<1500)
        printf("%0.2f\n",(float)salary*2);
        if(salary>=1500)
        printf("%0.2f\n",salary+0.98*salary+500);
    }
    return 0;
}
