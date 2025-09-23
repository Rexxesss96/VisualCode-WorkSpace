using System;
using System.Collections.Generic;

public interface IVeicolo
{
    void Muovi();
}

public class Auto : IVeicolo
{
    public void Muovi()
    {
        Console.WriteLine("L'auto si muove su strada.");
    }
}

public class Bicicletta : IVeicolo
{
    public void Muovi()
    {
        Console.WriteLine("La bicicletta si muove a pedali.");
    }
}

class Program
{
    static void Main()
    {
        List<IVeicolo> veicoli = new List<IVeicolo>
        {
            new Auto(),
            new Bicicletta()
        };
        foreach (var item in veicoli)
        {
            item.Muovi();
        }
    }

}