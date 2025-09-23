public abstract class Animale
{
    public abstract void Verso();
    public void Dormi() { Console.WriteLine("Zzzzz..."); }
}

public class Cane : Animale
{
    public override void Verso() { Console.WriteLine("Bau Bau"); }
}

public class Gatto : Animale
{
    public override void Verso() { Console.WriteLine("Miao Miao"); }
}

class Program
{
    static void Main(string[] args)
    {
        Animale a1 = new Cane();
        Animale a2 = new Gatto();

        a1.Verso(); // Output: Bau Bau
        a2.Verso(); // Output: Miao Miao

        a1.Dormi(); // Output: Zzzzz...
        a2.Dormi(); // Output: Zzzzz...
    }
}
