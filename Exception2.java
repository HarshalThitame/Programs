import java.util.*;

class Exception2
{
    public static void main(String a[])
    {
        int ans = 0,iNo1 = 0,iNo2 = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter First Number");
        iNo1  = sobj.nextInt();

        System.out.println("Please Enter Second Number");
        iNo2 = sobj.nextInt();

        try
        {
            ans = iNo1 / iNo2;  //Exception
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Exception Occured as : "+obj);
        }
        finally
        {
            sobj.close();
        }
        System.out.println("Division is : "+ans);

    }
}
