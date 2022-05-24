import java.lang.*;

class Employee
{
    public String name;
    public int Salary;

    public Employee(String str,int no)
    {
        this.name = str;
        this.Salary = no;
    }

    public String toString()
    {
        return this.name+" -> "+this.Salary;
    }
}
class Object
{
    public static void main(String a[]) throws java.lang.Exception
    {
        Employee eobj = new Employee("Harshal",110000);
        System.out.println(eobj.toString());
    }
}
