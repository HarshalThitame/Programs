import java.lang.*;
import java.io.*;

class Input1
{
    public static void main(String a[]) throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);
        //try
        
            System.out.println("Enter Your Name : ");
            String name = bobj.readLine();

//         catch(IOException obj)
//         {
//             System.out.println(obj);
//         }
        System.out.println("Your Name is : "+name);
    }
}