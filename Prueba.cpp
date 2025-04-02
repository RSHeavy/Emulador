using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

static void Main(string[] args)
{
    int a = Console.Read();
    /*
    AGREGADO PARA PROBAR RANDOM
    int random;
    int i;
    int j;

    for(i = 0; i < 20; i++) {
        random = rand(50);
        j = i + 1;
        Console.WriteLine(j + " Random = " + random);
    }
    */

    /*
    AGREGADO PARA PROBAR CICLOS
    int n;
    int i;
    int spaces;
    int asteristics;

    Console.Write("Height of the triangle = ");
    n = Console.Read();

    Console.WriteLine();

    for (i = 0; i < n; i++)
    {
        for (spaces = 0; spaces < i; spaces++)
        {
            Console.Write(" ");
        }

        for (asteristics = 0; asteristics < n - i; asteristics++)
        {
            Console.Write("* ");
        }

        Console.WriteLine();
    }
    */
   /*
    char n;
    int p;

    float altura, i, j;
    float x = 0, y = 10, z = 2;
    float c;

    c = (char)(100 + 200); // 44

    Console.Write("Valor de altura = ");
    altura = Console.ReadLine();

    // Si altura = 5, entonces
    x = (char)(((3 + altura) * 8 - (10 - 4) / 2)); // 61
    x--;                                           // 60
    x += 40;                                       // 100
    x *= 2;                                        // 200
    x /= (y - 6);                                  // 50
    x = x + 5;                                     // 55

    for (i = 1; i <= altura; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
                Console.Write("*");
            else
                Console.Write("-");
        }
        Console.WriteLine("");
    }

    i = 0;

    do
    {
        Console.Write("-");
        i++;
    } while (i < altura * 2);

    Console.WriteLine("");

    for (i = 1; i <= altura; i++)
    {
        j = 1;
        while (j <= i)
        {
            Console.Write("" + j);
            j++;
        }
        Console.WriteLine("");
    }

    i = 0;

    do
    {
        Console.Write("-");
        i++;
    } while (i < altura * 2);

    Console.WriteLine("");
    */
}