import java.util.*;

class Digit
{
    public int Diff(int n)
    {
        int evenCnt=0;
        int oddCnt=0;
        int iDigit=0;
        while(n!=0)
        {
             iDigit=n%10;

             if(iDigit%2 == 0)
             {
               System.out.println(iDigit);
                evenCnt++;
             }
             else{
                oddCnt++;
             }
             n=n/10;
        }
        return (evenCnt-oddCnt);
    }
}
class assignment32_5

{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
         int iNo=sobj.nextInt();

        Digit dobj=new Digit();
        int iRet=dobj.Diff(iNo);
        System.out.println("Difference between even and odd counts digit:"+iRet);

    }

}