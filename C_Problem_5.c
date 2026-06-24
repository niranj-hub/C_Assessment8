#include <stdio.h>
int count_total_digits(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=count_total_digits(x);
    printf("%d",y);
    return 0;
}
int count_total_digits(int x)
{
    int count;
    count=0;
    while(x>0)
    {
        count=count+1;
        x=x/10;
    }
    return count;
}
