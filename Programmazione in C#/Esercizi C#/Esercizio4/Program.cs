using System;

public class Persona
{
    public string Nome { get; set; }
    public int Eta { get; set; }

    public void Saluta()
    {
        Console.WriteLine($"Ciao, mi chiamo {Nome} e ho {Eta} anni.");
    }
}

class Program
{
    static void Main(string[] args)
    {
        Persona p1 = new Persona();
        p1.Nome = "Mario";
        p1.Eta = 30;
        p1.Saluta();
    }
}