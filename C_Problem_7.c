#include <stdio.h>
int disp_reverse_number(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_reverse_number(x);
    printf("%d",y);
    return 0;
}
int disp_reverse_number(int x)
{
    int rev,rem;
    rev=0;
    while(x>0)
    {
        rem=x%10;
        rev=(rev*10)+rem;
        x=x/10;
    }
    return rev;
}
