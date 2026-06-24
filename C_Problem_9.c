#include <stdio.h>
int check_last_digit_odd(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=check_last_digit_odd(x);
    printf("%d",y);
    return 0;
}
int check_last_digit_odd(int x)
{
    int first,last,temp,power;
    temp=x;
    last=x%10;
    power=1;
    while(temp>=10)
    {
        temp=temp/10;
        power=power*10;
    }
    first=temp;
    if(last%2!=0)
    {
        x=x-power;
    }
    return x;
}
