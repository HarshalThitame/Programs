import java.lang.*;


class Arithmetic <T>
{
    public T Addition(T No1,T No2)
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

class Generic
{
    public static void main(String arg[])
    {
        Arithmetic <Integer>iobj = new Arithmetic<Integer>();
        Integer iret = 0;
        iret = iobj.Addition(10,11);
        System.out.println("Addition is : "+iret);


        Arithmetic <Float>fobj = new Arithmetic<Float>();
        Float fret;
        fret = fobj.Addition(10.2,11.9);
        System.out.println("Addition is : "+fret);

    }
}