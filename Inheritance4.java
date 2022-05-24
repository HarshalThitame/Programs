import java.lang.*;

class Base
{
    public int i;
    public int j;

    public void fun()
    {
        System.out.println("Inside base fun");
    }
}

class Derived extends Base      // class Derived : public Base
{
    public int x;
    public int y;

    public void gun()
    {
        System.out.println("Inside derived gun");
    }
}

class Derivedx extends Derived
{
    public int a;

    public void sun()
    {
        System.out.println("Inside Derivedx sun");
    }
}
class Inheritance4
{
    public static void main(String a[])
    {
        System.out.println("Inside main");
        Derivedx dobj = new Derivedx();
    }
}