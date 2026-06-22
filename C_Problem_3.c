#include <stdio.h>
int disp_rsum(int);
int main()
{
    int x,y;
    x=0;
    y=disp_rsum(x);
    printf("%d",y);
    return 0;
}
int disp_rsum(int a)
{
    int y,i;
    y=0;
    for(i=15;i<=95;i=i+10)
    {
        y=y+i;
    }
    return y;
}
