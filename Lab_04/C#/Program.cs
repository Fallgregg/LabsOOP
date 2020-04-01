using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace C_Sharp
{
    class Program
    {
        static void Main(string[] args)
        {
            string str;
            Console.Write("Input the string: ");
            str = Console.ReadLine();
            MyClass R1 = new MyClass();
            MyClass R2 = new MyClass(str);
            MyClass R3 = new MyClass(R2);
            Console.Write("R2 / 2:\n");
            R2 = R2 / 2;
            Console.WriteLine(R2.getStr());
            Console.Write("R2 + R3:\n");
            R1 = R2 + R3;
            Console.WriteLine(R1.getStr());
            Console.ReadKey();
        }
    }
}
