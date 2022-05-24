import java.lang.*;
import java.io.*;

class Input2
{
    public static void main(String a[])
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);
        try
        {
            System.out.print("Enter Your Name : ");
            String name = bobj.readLine();
            System.out.println("Your Name is : "+name);
            System.out.printu("Enter your Age : ");
            int age = Integer.parseInt(bobj.readLine());
            System.out.println("Your Age is : "+age);

         }
        catch(IOException obj)
        {
            System.out.println("Exception Occurs");
        }
        finally
        {
            iobj = null;
            bobj = null;
        }
    }
}