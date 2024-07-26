using System;

class Program
{
    static void Main(string[] arg)
    {
        Saludar();
        
        ImprimirNombre("Vanesa");
        
        int[] misNumeros = { 1, 2, 3, 4, 5 };
        ImprimirArray(misNumeros);
        
        int resultado = Sumar(5, 7);
        Console.WriteLine($"Resultado de la suma de 5 y 7: {resultado}");
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
    
    // Funcion 3: con un array como parametro usando un bucle for
    static void ImprimirArray(int[] numeros)
    {
        for (int i = 0; i < numeros.Length; i++)
        {
            Console.WriteLine(numeros[i]);
        }
    }
    
    // Función 4: con parametros y con retorno
    static int Sumar(int a, int b)
    {
        return a + b;
    }

}
