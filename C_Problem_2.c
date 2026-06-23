#include <stdio.h>
int disp_rsum(int);
int main()
{
    int x,y;
    y=disp_rsum(x);
    printf("%d",y);
    return 0;
}
int disp_rsum(int x)
{
    int sum,i;
    sum=0;
    for(i=6;i>=1;i--)
    {
        sum=sum+i;
    }
    return sum;
}
