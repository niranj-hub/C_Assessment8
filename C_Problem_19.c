#include <stdio.h>
int disp_LCM3(int,int,int);
int main()
{
    int x,y,z,result;
    printf("Enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);
    result=disp_LCM3(x,y,z);
    printf("%d",result);
    return 0;
}
int disp_LCM3(int x,int y,int z)
{
    int i;
    for(i=1;i<=x*y*z;i++)
    {
        if(i%x==0 && i%y==0 && i%z==0)
        {
            return i;
        }
    }
}
