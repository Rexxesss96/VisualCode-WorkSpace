//Vediamo Ereditarietà + Overriding

using System;
using System.Collections.Generic;

public class Animale
{
    public string Nome { get; set; }

    public Animale(string nome)
    {
        Nome = nome;
    }
    public virtual void Verso()
    {
        Console.WriteLine(Nome + " fa un verso generico");
    }
}

public class Cane : Animale
{
    public Cane(string nome) : base(nome) { }
    public override void Verso()
    {
        Console.WriteLine(Nome + " abbaia: Bau Bau!");
    }
}

public class Gatto : Animale
{
    public Gatto(string nome) : base(nome) { }
    public override void Verso()
    {
        Console.WriteLine(Nome + " miagola: Miao!");
    }
}

class Program
{
    static void Main(string[] args)
    {
        List<Animale> animali = new List<Animale>
        {
            new Cane("Fido"),
            new Gatto("Micia"),
            new Animale("Creatura misteriosa")
        };

        foreach (var a in animali)
        {
            a.Verso();
        }
    }
}