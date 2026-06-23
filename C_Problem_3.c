#include <stdio.h>
int disp_2digit_ones5(int);
int main()
{
    int x,y;
    y=disp_2digit_ones5(x);
    printf("%d",y);
    return 0;
}
int disp_2digit_ones5(int x)
{
    int sum,i;
    sum=0;
    for(i=15;i<=95;i=i+10)
    {
        sum=sum+i;
    }
    return sum;
}
