using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // Lista
        List<string> nomi = new List<string>() { "Anna", "Luca", "Marco" };
        nomi.Add("Giulia");
        foreach (var nome in nomi)
        {
            Console.WriteLine(nome);
        }

        // Dizionario (equivalente a HashMap in Java)
        Dictionary<int, string> studenti = new Dictionary<int, string>();
        studenti[1] = "Alice";
        studenti[2] = "Bob";

        foreach (var kvp in studenti)
        {
            Console.WriteLine($"Matricola {kvp.Key}: {kvp.Value}");
        }
    }
}
