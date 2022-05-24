import java.lang.*;

class Arithmetic <T>
{
    public T No1;
    public T No2;
    Arithmetic(T a,T b)
    {
        No1 = a;
        No2 = b;
    }
    public T Arithmetic()
    {

        if((No1 instanceof Integer) && (No2 instanceof Integer))
        {
            return (T)(Integer)((Integer)No1 + (Integer)No2);
        }
        else if((No1 instanceof Float) && (No2 instanceof Float))
        {
            return (T)(Float)((Float)No1 + (Float)No2);
        }
        else if((No1 instanceof Double) && (No2 instanceof Double))
        {
            return (T)(Double)((Double)No1 + (Double)No2);
        }
        else
        {
            return null;
       }
    }
}

class GenericOOP
{
    public static void main(String arg[])
    {
        Arithmetic <Integer>obj = new Arithmetic<Integer>();
        Integer ret = 0;
        ret = obj.Arithmetic(10,11);
        System.out.println("Addition is : "+ret);
    }
}