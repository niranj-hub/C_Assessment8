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
    for(i=6;i>=1;i--)
    {
        y=y+i;
    }
    return y;
}
