import java.lang.*;

class Array3
{
    public static void main(String a[])
    {
        int iCnt = 0;
        int arr[][] = new int[2][3];
        arr[0][0] = 10;
        arr[0][1] = 20;
        arr[0][2] = 70;
        arr[1][0] = 30;
        arr[1][1] = 40;
        arr[1][2] = 50;

        for(iCnt = 0;iCnt < arr.length;iCnt++)
        {
            for(int jCnt = 0;jCnt <arr[iCnt].length; jCnt++)
            {
                 System.out.println(arr[iCnt][jCnt]);
            }
        }

    }
}
