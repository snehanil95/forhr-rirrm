#include<stdio.h>
int Factor(int n)
{
    int iCnt=0;
    int iSum=0;
    printf("Factor:\n");
    for(iCnt=1;iCnt<=n/2;iCnt++)
    {
     if(n%iCnt==0)
      {
        printf("%d\n",iCnt);
        iSum=iSum+iCnt;
      }

    }
   return iSum;
   
}
int main()
{
    //int iAns=0;
    int iNo=0;
    printf("enter the num:");
    scanf("%d",&iNo);
    //Factor(iNo);
    //printf("Factrorial %d of %d is",iNo,iAns);
   printf("Addition of factors:%d",Factor(iNo));
    return 0;
}