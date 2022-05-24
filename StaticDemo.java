import java.lang.*;

class Demo
{
    public int i;
    public int j;
    static public int k;

    static
    {
        System.out.println("Inside static lock");
        k = 10;;;
    }

    public Demo()
    {
        this.i = 0;
        this.j = 0;
    }

    public void fun()
    {
        System.out.println("Inside non Static fun");
    }

    public static void gun()
    {
        System.out.println("Inside static Gun");
    }
}

class StaticDemo
{
    public static void main(String arg[])
    {
        Demo.gun();
        System.out.println(Demo.k);
        Demo obj;
        obj = new Demo();
        obj.fun();

        System.out.println(obj.i);
        System.out.println(obj.j);

    }
}