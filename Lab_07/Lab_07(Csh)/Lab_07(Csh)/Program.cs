using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace Lab_07_Csh_
{
    class Program
    {
        static void Main(string[] args)
        {
            var node = new MyStruct();
            short el;
            int n;
            short add;
            WriteLine("Enter first element: ");
            el = short.Parse(ReadLine());
            node = new MyStruct();
            node.push(el);

            int size = 0;
            WriteLine("Enter number of elemetns in your list: ");
            size = Convert.ToInt32(ReadLine());

            Write("Enter elements: \n");
            for (int i = 0; i < size; i++)
            {
                add = short.Parse(ReadLine());
                if(add >= -32768 && add <= 32767)
                {
                    node.push(add);
                }
            }

            WriteLine($"List: ");
            node.output();

            n = node.count();
            WriteLine($"\n\nNumber of elements multiple 4: {n}");

            node.exchange();
            WriteLine($"\nNew list: ");
            node.output();

            ReadKey();
        }
    }
}
           