#include <stdio.h>
int disp_interchange_first_last_digit(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_interchange_first_last_digit(x);
    printf("%d",y);
    return 0;
}
int disp_interchange_first_last_digit(int x)
{
    int first,last,middle,temp,power,result;
    temp=x;
    last=x%10;
    power=1;
    while(temp>=10)
    {
        temp=temp/10;
        power=power*10;
    }
    first=temp;
    middle=(x%power)/10;
    result=(last*power)+(middle*10)+first;
    return result;
}
