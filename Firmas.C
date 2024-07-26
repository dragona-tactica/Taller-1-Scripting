using System;

class Program
{
    static void Main(string[] arg)
    {
        Console.WriteLine("Funcion 1");
        Saludar();

        Console.WriteLine("Funcion 2");
        ImprimirNombre("Vanesa");

        Console.WriteLine("Funcion 3");
        int[] misNumeros = { 1, 2, 3, 4, 5 };
        ImprimirArray(misNumeros);

        Console.WriteLine("Funcion 4");
        int resultado = Sumar(5, 7);
        Console.WriteLine($"Resultado de la suma de 5 y 7: {resultado}");
        
        Console.WriteLine("Funcion 5");
        int[,] miMatriz = { { 1, 2 }, { 3, 4 } };
        ImprimirMatriz(miMatriz);

        Console.WriteLine("Funcion 6");
        string texto = "Hola, mundo";
        int longitud = ObtenerLongitud(texto);
        Console.WriteLine($"Longitud del texto '{texto}': {longitud}");

        Console.WriteLine("Funcion 7");
        ImprimirMensaje("Heartless");

        Console.WriteLine("Funcion 8");
        int producto = Multiplicar(6, 8);
        Console.WriteLine($"Resultado de la multiplicacion: {producto}");

        Console.WriteLine("Funcion 9");
        string cadenaOriginal = "Beltran";
        string cadenaInvertida = InvertirCadena(cadenaOriginal);
        Console.WriteLine($"Cadena original: {cadenaOriginal}");
        Console.WriteLine($"Cadena invertida: {cadenaInvertida}");

        Console.WriteLine("Funcion 10");
        int limite = 10;
        int[] secuencia = GenerarSecuencia(limite);
        Console.WriteLine("Secuencia generada:");
        ImprimirArray(secuencia);

        Console.WriteLine("Funcion 11");
        int numero = 6;
        if (EsPar(numero))
        {
            Console.WriteLine($"El numero {numero} es par.");
        }
        else
        {
            Console.WriteLine($"El numero {numero} es impar.");
        }

        Console.WriteLine("Funcion 12");
        string palabra = "William";
        int numeroLetras = ContarLetras(palabra);
        Console.WriteLine($"La palabra '{palabra}' tiene {numeroLetras} letras.");

        Console.WriteLine("Funcion 13");
        int numeroFactorial = 5;
        int factorial = CalcularFactorial(numeroFactorial);
        Console.WriteLine($"El factorial de {numeroFactorial} es {factorial}.");

        Console.WriteLine("Funcion 14");
        int[] numeros = { 3, 5, 7, 2, 8, 6 };
        int maximo = EncontrarMaximo(numeros);
        Console.WriteLine($"El numero mas grande en el array es: {maximo}");

        Console.WriteLine("Funcion 15");
        string palabraPalindromo = "anilina";
        if (EsPalindromo(palabraPalindromo))
        {
            Console.WriteLine($"La palabra '{palabraPalindromo}' es un palindromo.");
        }
        else
        {
            Console.WriteLine($"La palabra '{palabraPalindromo}' no es un palindromo.");
        }

        Console.WriteLine("Funcion 16");
        double promedio = CalcularPromedio(misNumeros);
        Console.WriteLine($"El promedio del array es: {promedio}");
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
    
     // Funcion 10:genera una secuencia de numeros
    static int[] GenerarSecuencia(int limite)
    {
        int[] secuencia = new int[limite];
        for (int i = 0; i < limite; i++)
        {
            secuencia[i] = i + 1;
        }
        return secuencia;
    }

    // Funcion 11: si un número es par
        static bool EsPar(int numero)
        {
            return numero % 2 == 0;
        }

    // Funcion 12: cuenta el número de letras en una palabra
    static int ContarLetras(string palabra)
    {
        return palabra.Length;
    }

    // Funcion 13: calcula el factorial de un número
    static int CalcularFactorial(int numero)
    {
        int factorial = 1;
        for (int i = 1; i <= numero; i++)
        {
            factorial *= i;
        }
        return factorial;
    }

    // Funcion 14: encuentra el número más grande en un array
    static int EncontrarMaximo(int[] numeros)
    {
        int maximo = numeros[0];
        for (int i = 1; i < numeros.Length; i++)
        {
            if (numeros[i] > maximo)
            {
                maximo = numeros[i];
            }
        }
        return maximo;
    }

    // Funcion 15: determina si una palabra es un palindromo
    static bool EsPalindromo(string palabra)
    {
        int inicio = 0;
        int fin = palabra.Length - 1;
        
        while (inicio < fin)
        {
            if (palabra[inicio] != palabra[fin])
            {
                return false;
            }
            inicio++;
            fin--;
        }
        
        return true;
    }

    // Funcion 16: calcula el promedio de un array de enteros
    static double CalcularPromedio(int[] numeros)
    {
        int suma = 0;
        for (int i = 0; i < numeros.Length; i++)
        {
            suma += numeros[i];
        }
        return (double)suma / numeros.Length;
    }
}
