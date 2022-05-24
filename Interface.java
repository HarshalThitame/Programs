import java.lang.*;

interface Circle
{
    float PI = 3.14f;

    float CalculateArea(float Radius);
    float CalculateCircumfarence(float Radius);
}

class Area implements Circle
{
    public float CalculateArea(float Radius)
    {
        return (PI * Radius * Radius);
    }

    public float CalculateCircumfarence(float Radius)
    {
        return (2 * PI * Radius);
    }

}


class Interface
{
    public static void main(String a[])
    {
        Area obj = new Area();
        float fRet = 0.0f;

        fRet = obj.CalculateArea(10.5f);
        System.out.println("Area is : "+fRet);

        fRet = obj.CalculateCircumfarence(10.5f);
        System.out.println("Circumfarence is : "+fRet);

    }
}