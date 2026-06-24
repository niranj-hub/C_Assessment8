#include <stdio.h>
int disp_total_odd_digits(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_total_odd_digits(x);
    printf("%d",y);
    return 0;
}
int disp_total_odd_digits(int x)
{
    int count,rem;
    count=0;
    while(x>0)
    {
        rem=x%10;
        if(rem%2!=0)
        {
            count=count+1;
        }  
        x=x/10;
    }
    return count;
}
