import java.lang.*;

class Demo extends Thread
{
    public void run()   //Running state
    {
        for(int i = 0; i < 10; i++)
        {
            System.out.println("Value of i : "+i);
            System.out.println("Name of Thread : "+Thread.currentThread().getName()) ;
            try
            {
                Thread.sleep(1000);
            }
            catch(java.lang.Exception obj)
            {}
        }
    }
}

class Mythread5
{
    public static void main(String a[]) throws java.lang.Exception
    {
        Demo obj1 = new Demo();
        Thread t1 = new Thread(obj1); //new state

        Demo obj2 = new Demo();
        Thread t2 = new Thread(obj2); //new state

        t1.start();

        t1.join();
        
        t2.start();
        //Dead state
    }
}