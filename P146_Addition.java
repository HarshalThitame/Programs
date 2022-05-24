import java.lang.*;
import java.util.*;

class AdditionOfN
{
    private int Arr[];

    public AdditionOfN(int iNo)
    {
        Arr=new int[iNo];
    }

    public void Accept()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array elements:\n");

        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sc.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("\nArray elements are\n\n");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]+"\t");
        }System.out.println("\n");
    }

    public int Summation()
    {
        int iSum=0,iCnt=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            iSum+=Arr[iCnt];
        }
        return iSum;
    }
    public static void main(String arg[])
    {
        int iLength=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter limit for Constructor=");
        iLength=sc.nextInt();

        AdditionOfN obj=new AdditionOfN(iLength);
        obj.Accept();
        obj.Display();
        System.out.println("\nSummation = "+obj.Summation());

        obj=null;
    }
}