#include <stdio.h>
int disp_2digit_even_sum6(int);
int main()
{
    int x,y;
    x=0;
    y=disp_2digit_even_sum6(x);
    printf("%d",y);
    return 0;
}
int disp_2digit_even_sum6(int x)
{
    int count,i;
    count=0;
    for(i=0;i<=9;i++)
    {
        if(i==2||i==3||i==5||i==7)
        {
            count=count+1;
        }
    }
    return count;
}
