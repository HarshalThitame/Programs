import java.util.*;
import java.lang.*;

class Exception4
{
    public static void main(String arg[])
    {
        int Arr[] = {10,20,30,40,50};
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the index");
        int index = sobj.nextInt();

        try
        {
            System.out.println("Element at that index is : "+Arr[index]);
        }
          catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("inside catch");
            System.out.println(obj);
        }
        catch(java.lang.Exception obj)
        {
            System.out.println(obj);
        }
        finally
        {
            System.out.println("Inside finally");
            sobj.close();
        }
        System.out.println("End of Application");
    }
}