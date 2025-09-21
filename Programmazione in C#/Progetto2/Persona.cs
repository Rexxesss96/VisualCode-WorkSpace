public class Persona
{
    //Proprietà (al posto dei getter/setter lunghi)
    public string Nome { get; set; }
    public int Eta { get; set; }

    //Costruttore
    public Persona(string nome, int eta)
    {
        Nome = nome;
        Eta = eta;
    }

    public void Saluta()
    {
        Console.WriteLine($"Ciao, sono {Nome} e ho {Eta} anni");
    }

    class Program
    {
        static void Main()
        {
            Persona p = new Persona("Marco", 25);
            p.Saluta();
        }
    }

}