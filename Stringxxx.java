import java.io.*;

class Stringxxx
{
    public static void main(String a[]) throws IOException
    {
      String str1 = "Hello";
      String str2 = "Hello";
      String str3 = new String("Hello");

      if(str1 == str2)
      {
        System.out.println("Strings are same ");
      }
      else
      {
        System.out.println("Strings are different");
      }
      if(str1.comparesTo(str3))
      {
        System.out.println("Strings are same");
      }
      else
      {
        System.out.println("Strings are not same");
      }
    }
}