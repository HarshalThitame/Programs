import java.io.*;
import java.awt.*;

class FrameDemo1
{
    public static void main(String a[]) throws IOException
    {
        System.out.println("Print Data on console");

        Frame fobj = new Frame("Marvellous");
        fobj.setSize(400,400);
        fobj.setVisible(true);
    }
}