import java.lang.*;

abstract class RBI
{
    public int Balance;

    public RBI()
    {
        this.Balance = 0;
    }

    public void Credit(int Amount)
    {
        this.Balance = this.Balance + Amount;
    }

    public void Debit(int Amount)
    {
        this.Balance = this.Balance - Amount;
    }

    public abstract int CalculateIntrest();
}

class SBI extends RBI
{
    public int AccountNumber;
    public int IFSC;

    public int CalculateIntrest()
    {
        return 6;
    }
}

class PNB extends RBI
{

    public int AccountNumber;
    public int IFSC;

    public int CalculateIntrest()
    {
        return 7;
    }
}

class Abst