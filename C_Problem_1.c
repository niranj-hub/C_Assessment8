#include <stdio.h>
int disp_sum(int);
int main()
{
    int x,y;
    x=0;
    y=disp_sum(x);
    printf("%d",y);
    return 0;
}
int disp_sum(int x)
{
    int sum,i;
    sum=0;
    for(i=0;i<=5;i++)
    {
        sum=sum+i;
    }
    return sum;
}
