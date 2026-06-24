#include <stdio.h>
int disp_single_digit_square(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_single_digit_square(x);
    printf("%d",y);
    return 0;
}
int disp_single_digit_square(int x)
{
    int count,rem;
    count=0;
    while(x>0)
    {
        rem=x%10;
        if(rem==1||rem==4||rem==9)
        {
            count=count+1;
        }  
        x=x/10;
    }
    return count;
}
