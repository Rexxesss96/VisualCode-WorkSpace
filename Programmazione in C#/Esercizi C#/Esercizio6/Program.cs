using System;

interface IVeicolo
{
    void Muovi();
}

public class Auto : IVeicolo
{
    public void Muovi()
    {
        Console.WriteLine("L'auto si sta muovendo.");
    }
}

public class Bicicletta : IVeicolo
{
    public void Muovi()
    {
        Console.WriteLine("La bicicletta si sta muovendo.");
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        /* IVeicolo[] veicoli = new IVeicolo[4];
        auto[0] = new Auto();
        auto[1] = new Bicicletta();
        auto[2] = new Auto();
        auto[3] = new Bicicletta(); */

        List<IVeicolo> veicoli = new List<IVeicolo>()
        {
            new Auto(),
            new Bicicletta(),
            new Auto(),
            new Bicicletta()
        };

        foreach (IVeicolo veicolo in veicoli)
        {
            veicolo.Muovi();
        }
    }
}
