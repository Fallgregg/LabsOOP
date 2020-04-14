using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace Lab_05_Csh_
{
    class Program
    {
        static void Main(string[] args)
        {
            double x1, x2, x3, x4, y1, y2, y3, y4;
            WriteLine("Enter first vertex:");
            x1 = Convert.ToDouble(ReadLine());
            y1 = Convert.ToDouble(ReadLine());
            WriteLine("Enter second vertex:");
            x2 = Convert.ToDouble(ReadLine());
            y2 = Convert.ToDouble(ReadLine());
            WriteLine("Enter third vertex:");
            x3 = Convert.ToDouble(ReadLine());
            y3 = Convert.ToDouble(ReadLine());
            WriteLine("Enter fourth vertex:");
            x4 = Convert.ToDouble(ReadLine());
            y4 = Convert.ToDouble(ReadLine());
            Rectangle val = new Rectangle(x1, y1, x2, y2, x3, y3, x4, y4);
            WriteLine("Perimetr = " + val.getPerimetr());
            WriteLine("Area = " + val.getArea());
            ReadKey();
        }
    }
}
