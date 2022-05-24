import java.io.*;
import java.awt.*;
class MarvellousFrame
{
    public Frame fobj;

    public MarvellousFrame(String name)
    {
        fobj = new Frame(name);
        fobj.setSize(600,600);
        fobj.setVisible(true);
    }
}
class FrameDemo2
{
    public static void main(String a[]) throws IOException
    {
        System.out.println("Print Data on console");

        MarvellousFrame mobj = new MarvellousFrame("PPA");

    }
}