import java.lang.*;

class Demo1
{
    public int i;
    public int j;

    public Demo1()
    {
        this.i = 0;
        this.j = 0;
    }
    public Demo1(int x,int y)
    {
        this.i = x;
        this.j = y;
    }

     public void fun()
     {
        System.out.println("Inside Fun");
     }
     public void gun()
     {
        System.out.println("Inside Gun");
     }
}
class Marvellous
{
    public static void main(String arr[])
    {
        System.out.println("Inside Main");
        Demo1 d = new Demo1();
        d.fun();
        d.gun();
        System.out.println(d.i);

        Demo1 obj = new Demo1(11,21);
        obj.fun();
        obj.gun();
        System.out.println(obj.i);
    }
}