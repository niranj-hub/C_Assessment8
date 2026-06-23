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
int disp_2digit_odd_sum_tens7(int x)
{
    int sum,i,tens,odd;
    sum=0;
    for(i=10;i<=99;i++)
    {
        tens=i/10;
        odd=i%2;
        if(tens==7 && odd==1)
        {
           sum=sum+i; 
        }
    }
    return sum;
}
