import java.lang.*;

class Demo
{}

class Classinfo
{
    public static void main(String a[])
    {
        Demo dobj = new Demo();

        Class cref = dobj.getClass();
        System.out.println("class name of obj is : "+cref.getName());

        String str = "Marvellous";
        Class cref1 = str.getClass();
        System.out.println("class name of obj is : "+cref1.getName());

    }
}
