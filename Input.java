import java.lang.*;
import java.util.*;

class Input
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String name = sobj.nextLine();

        System.out.println("Enter Your Age : ");
        int age = sobj.nextInt();

        System.out.println("Enter Your Percentage : ");
        float percentage = sobj.nextFloat();

        System.out.println("Your Name is : "+name);
        System.out.println("Your age is : "+age);
        System.out.println("Your percentage is : "+percentage);
        sobj.close();
    }
}