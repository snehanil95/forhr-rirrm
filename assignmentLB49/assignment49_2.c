//32768 bit on number
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool chkBit(UINT No)
{
    UINT iMask=0X00040010;
    UINT result=0;

    result=No & iMask;

    if(result==iMask)
    {
        return true;
    }

    else
    {
        return false;
    }

}

int main()
{

   UINT value=0;
    bool bRet=0;

    printf("Enter value in Decimal format:");
    scanf("%d",&value);

    bRet=chkBit(value);

    if(bRet==true)
    {
        printf("5th,8th Bit is on");

    }
    else
    {
        printf(" bit not on");
    }
    return 0;
}