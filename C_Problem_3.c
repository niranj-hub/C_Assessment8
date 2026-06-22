#include <stdio.h>
int disp_2digit_ones5(int);
int main()
{
    int x,y;
    x=0;
    y=disp_2digit_ones5(x);
    printf("%d",y);
    return 0;
}
int disp_2digit_ones5(int a)
{
    int y,i;
    y=0;
    for(i=15;i<=95;i=i+10)
    {
        y=y+i;
    }
    return y;
}
