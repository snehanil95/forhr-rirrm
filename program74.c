/*
Enter the number of row:4
Enter the number of colums:4

1	*	*	*	
*	2	*	*	
*	*	3	*	
*	*	*	4
*/

#include<stdio.h>

void Display(int R,int C)
{
    int i,j;
    for(i=1;i<=R;i++)

    if(R!=C)
    {
        printf("Number of rows and columns are not same");
        return;
    }
     {
        for(j=1;j<=C;j++)
        {
            if(i !=j)
            printf("*\t");
            else
            printf("%d\t",i);
        }
        printf("\n");
     }
}
int main()
{
  int iRow=0,iCol=0;

  printf("Enter the number of row:");
  scanf("%d",&iRow);

  printf("Enter the number of colums:");
  scanf("%d",&iCol);
  
    Display(iRow,iCol);

    return 0;
}