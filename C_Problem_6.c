#include <stdio.h>
int disp_sum_all_digits(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_sum_all_digits(x);
    printf("%d",y);
    return 0;
}
int disp_sum_all_digits(int x)
{
    int sum,rem;
    sum=0;
    while(x>0)
    {
        rem=x%10;
        sum=sum+rem;
        x=x/10;
    }
    return sum;
}
