#include <stdio.h>
int disp_2digit_odd_sum_tens7(int);
int main()
{
    int x,y;
    x=0;
    y=disp_2digit_odd_sum_tens7(x);
    printf("%d",y);
    return 0;
}
int disp_2digit_odd_sum_tens7(int a)
{
    int y,i,tens,odd;
    y=0;
    for(i=10;i<=99;i++)
    {
        tens=i/10;
        odd=i%2!=0;
        if(tens==7 && odd)
        {
           y=y+i; 
        }
    }
    return y;
}
