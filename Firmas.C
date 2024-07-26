using System;

class Program
{
    static void Main(string[] arg)
    {
        Saludar();
        
        ImprimirNombre("Vanesa");
    }

    //Funcion 1: sin parametros y sin retorno
    static void Saludar()
    {
        Console.WriteLine("¡Hola!");
    }
    
    // Funcion 2: con parametros y sin retorno
    static void ImprimirNombre(string nombre)
    {
        Console.WriteLine($"Nombre: {nombre}");
    }

}
