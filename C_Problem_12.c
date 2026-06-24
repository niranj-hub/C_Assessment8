#include <stdio.h>
int disp_total_2digit_odd(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_total_2digit_odd(x);
    printf("%d",y);
    return 0;
}
int disp_total_2digit_odd(int x)
{
    int count,rem;
    count=0;
    while(x>9)
    {
        rem=x%100;
        if(rem%2!=0)
        {
            count=count+1;
        }  
        x=x/10;
    }
    return count;
}
