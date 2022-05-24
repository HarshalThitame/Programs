import java.lang.*;

class Demo
{

}
class Hash
{
    public static void main(String a[]) throws java.lang.Exception
    {
        String str1 = "Marvellous";
        String str2 = "Marvellous";
        String str3 = "Infosystem";
        Demo dobj = new Demo();

        System.out.println("Hashcode of str1 : "+str1.hashCode());
        System.out.println("Hashcode of str2 : "+str2.hashCode());
        System.out.println("Hashcode of str3 : "+str3.hashCode());
        System.out.println("Hashcode of dobj : "+dobj.hashCode());
    }
}
