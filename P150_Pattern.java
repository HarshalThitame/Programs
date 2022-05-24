import java.lang.*;

class Pattern
{
    private int iRow,iCol;

    public Pattern(int a,int b)
    {
        this.iRow = a;
        this.iCol = b;
    }
    public void DisplayPattern()
    {
       int i = 0,j = 0;
       for(i = 1;i <= iRow;i++)
       {
           for(j = 1;j <= iCol;j++)
           {
               System.out.print("*\t");
           }
           System.out.println();
        }
    }
}

class P150_Pattern
{
    public static void main(String a[])
    {
        Pattern obj = new Pattern(4,4);
        obj.DisplayPattern();
    }
}