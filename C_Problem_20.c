#include <stdio.h>
int disp_count_HCF2(int,int);
int main()
{
    int x,y,result;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    result=disp_count_HCF2(x,y);
    printf("%d",result);
    return 0;
}
int disp_count_HCF2(int x,int y)
{
    int i,hcf;
    hcf=1;
    for(i=1;i<=x && i<=y;i++)
    {
        if(x%i==0 && y%i==0)
        {
            hcf=i;
        }
    }
    return hcf;
}
