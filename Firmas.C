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
        
        int[,] miMatriz = { { 1, 2 }, { 3, 4 } };
        ImprimirMatriz(miMatriz);

        string texto = "Hola, mundo";
        int longitud = ObtenerLongitud(texto);
        Console.WriteLine($"Longitud del texto '{texto}': {longitud}");
        
         ImprimirMensaje("Heartless");
         
        int producto = Multiplicar(6, 8);
        Console.WriteLine($"Resultado de la multiplicacion: {producto}");
        
        string cadenaOriginal = "williamn";
        string cadenaInvertida = InvertirCadena(cadenaOriginal);
        Console.WriteLine($"Cadena original: {cadenaOriginal}");
        Console.WriteLine($"Cadena invertida: {cadenaInvertida}");
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
    
    // Funcion 4: con parametros y con retorno
    static int Sumar(int a, int b)
    {
        return a + b;
    }
    
    // Funcion 5: con una matriz como parametro
    static void ImprimirMatriz(int[,] matriz)
    {
        for (int i = 0; i < matriz.GetLength(0); i++)
        {
            for (int j = 0; j < matriz.GetLength(1); j++)
            {
                Console.Write(matriz[i, j] + " ");
            }
            Console.WriteLine();
        }
    }

     // Funcion 6: devuelve la longitud de una cadena
    static int ObtenerLongitud(string texto)
    {
        return texto.Length;
    }
    
    // Funcion 7: Función con parámetros y sin retorno
    static void ImprimirMensaje(string mensaje)
    {
        Console.WriteLine($"Mensaje: {mensaje}");
    }
    
    // Funcion 8: con parámetros y con retorno
     static int Multiplicar(int a, int b)
    {
        return a * b;
    }
    
     // Funcion 9:: invierte una cadena
    static string InvertirCadena(string texto)
    {
        char[] caracteres = texto.ToCharArray();
        Array.Reverse(caracteres);
        return new string(caracteres);
    }
}
