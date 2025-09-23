public interface IVeicolo
{
    void Muovi();
}

public class Auto : IVeicolo
{
    public void Muovi()
    {
        Console.WriteLine("L'auto si muove su strada");
    }
}

class Program
{
    static void Main(string[] args)
    {
        IVeicolo veicolo = new Auto();
        veicolo.Muovi();
    }
}