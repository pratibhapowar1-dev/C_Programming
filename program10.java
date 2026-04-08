import java.util.*;

class program9
{
    public static boolean CheckEvenOdd(int iNo)
    {
        int iRem = 0;
        iRem = iNo%2;

        if(iRem == 0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = true;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        bRet = CheckEvenOdd(iValue);

        if(bRet == true)
        {
            System.out.println(iValue +" is a even number " );
        }
        else
        {
            System.out.println(iValue + " is a odd number");
        }

    }
}
