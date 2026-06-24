#include <stdio.h>
int disp_two_digit_square(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_two_digit_square(x);
    printf("%d",y);
    return 0;
}
int disp_two_digit_square(int x)
{
    int count,rem;
    count=0;
    while(x>=10)
    {
        rem=x%100;
        if(rem==16||rem==25||rem==36||rem==49||rem==64||rem==81)
        {
            count=count+1;
        }  
        x=x/10;
    }
    return count;
}
