#include <stdio.h>
int disp_single_digit_prime(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_single_digit_prime(x);
    printf("%d",y);
    return 0;
}
int disp_single_digit_prime(int x)
{
    int count,rem;
    count=0;
    while(x>0)
    {
        rem=x%10;
        if(rem==2||rem==3||rem==5||rem==7)
        {
            count=count+1;
        }  
        x=x/10;
    }
    return count;
}
