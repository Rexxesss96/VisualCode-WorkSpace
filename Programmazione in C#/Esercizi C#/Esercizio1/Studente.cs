//Vediamo Classi e Oggetti

using System;

public class Studente
{
    public string Nome { get; set; }
    public int Voto { get; set; }

    public Studente(string nome, int voto)
    {
        Nome = nome;
        Voto = voto;
    }

    public void StampaInfo()
    {
        Console.WriteLine("Ciao sono: " + Nome + " con voto " + Voto);
    }
}

class Program
{
    static void Main(string[] args)
    {
        Studente s1 = new Studente("Marco", 28);
        Studente s2 = new Studente("Giulia", 30);

        s1.StampaInfo();
        s2.StampaInfo();
    }
}