import java.lang.*;

class Arithmetic
{
    public int No1;
    public int No2;
    Arithmetic(int a,int b)
    {
        No1 = a;
        No2 = b;
    }
    public int Arithmetic()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }
}

class SpecificOOP
{
    public static void main(String arg[])
    {
        Arithmetic obj = new Arithmetic();
        int ret = 0;
        ret = obj.Arithmetic(10,11);
        System.out.println("Addition is : "+ret);
    }
}