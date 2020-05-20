using System;
using static System.Console;

namespace Lab_07_Csh_
{
    class Program
    {
        static void Main(string[] args)
        {
            var rand = new Random();
            var test = new Struct();
            short el;
            int n;
            int add;
            int size = 0;

            WriteLine("Enter number of elemetns in your list: ");
            size = Convert.ToInt32(ReadLine());

            WriteLine("Enter first element: ");
            el = short.Parse(ReadLine());
            test = new Struct();
            test.push(el);

            for (int i = 0; i < size - 1; i++)
            {
                add = rand.Next(10, 100);
                if(add >= -32768 && add <= 32767)
                {
                    test.push(add);
                }
            }

            WriteLine($"List: ");
            test.output();

            n = test.count();
            WriteLine($"\n\nNumber of elements multiple 4: {n}");

            test.exchange();
            WriteLine($"\nNew list: ");
            test.output();

            ReadKey();
        }
    }
}
           
