public class Calcolatrice
{
    //Overloading => stesso nome, parametri diversi
    public int Somma(int a, int b) => a + b;
    public double Somma(double a, double b) => a + b;
}

public class Animale
{
    public virtual void FaiVerso() //Virtual indica che il metodo può essere sovrascritto
    {
        Console.WriteLine("Verso generico");
    }
}

public class Gatto : Animale
{
    //Overriding => ridefinizione di un metodo ereditato
    public override void FaiVerso() //override ridefinisce un metodo della classe base
    {
        Console.WriteLine("Miao");
    }
}

class Program
{
    static void Main(string[] args)
    {
        var calc = new Calcolatrice();
        Console.WriteLine(calc.Somma(2, 3));
        Console.WriteLine(calc.Somma(2.5, 3.5));

        Animale animale = new Gatto();
        animale.FaiVerso();
    }
}