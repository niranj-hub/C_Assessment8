#include <stdio.h>
int disp_count_sum14(int);
int main()
{
    int x,y;
    x=0;
    y=disp_count_sum14(x);
    printf("%d",y);
    return 0;
}
int disp_count_sum14(int x)
{
    int i,temp,sum,count;
    count=0;
    for(i=1;i<100000;i++)
    {
        temp=i;
        sum=0;
        while(temp>0)
        {
            sum=sum+(temp%10);
            temp=temp/10;
        }
        if(sum==14)
        {
            count=count+1;
        }
    }
    return count;
}
