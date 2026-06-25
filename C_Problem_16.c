#include <stdio.h>
int disp_biggest_4digit_div7_9(int);
int main()
{
    int x,y;
    x=0;
    y=disp_biggest_4digit_div7_9(x);
    printf("%d",y);
    return 0;
}
int disp_biggest_4digit_div7_9(int x)
{
    int i;
    for(i=9999;i>=1000;i--)
    {
        if(i%7==0 && i%9==0)
        {
            return i;
        }
    }
}
