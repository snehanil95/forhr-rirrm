#include<stdio.h>

void Display(int n)
{
    int iCnt;
 for(iCnt=1;iCnt<=n;iCnt++)
 {
    printf("%d.Jay Ganesh...\n",iCnt);
 }
}
int main()
{
    int No=0;
    printf("Enter the number how many times you want to display:");
    scanf("%d",&No);
    Display(No);
   
    return 0;
}