public class Animale
{
    public string Nome { get; set; }
    public void Mangia()
    {
        Console.WriteLine($"{Nome} sta mangiando");
    }
}

public class Cane : Animale
{
    public void Abbaia()
    {
        Console.WriteLine($"{Nome} sta abbaiando");
    }
}

class Program
{
    static void Main(string[] args)
    {
        Cane c = new Cane();
        c.Nome = "Rex";
        c.Mangia();
        c.Abbaia();
    }
}
