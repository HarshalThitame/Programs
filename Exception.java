import java.util.*;

class Exception
{
    public static void main(String a[])
    {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Please Enter First Number");
    int iNo1 = sobj.nextInt();

    System.out.println("Please Enter Second Number");
    int iNo2 = sobj.nextInt();

    int ans = iNo1 / iNo2;

    System.out.println("Division is : "+ans);
    sobj.close();
    }
}
