using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
using static System.Math;
namespace Lab06_Csh_
{
    class Program
    {
        static void Main(string[] args)
        {
            const int n = 4;
            Exception[] obj = new Exception[n];
            obj[0] = new Exception(1, 13, 25, 13);
            obj[1] = new Exception(1, 1, 1, 41);
            obj[2] = new Exception(4, 2, 5, 10);
            obj[3] = new Exception(1, 41, 12, 121);

            for (int i = 0; i < n; i++)
            {
                WriteLine($"[{i+1}] = { Round(obj[i].value(), n)}\n");
            }
            ReadKey();
        }
    }
}
