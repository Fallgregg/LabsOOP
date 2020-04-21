using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Math;

namespace Lab06_Csh_
{
    class Exception
    {
        private double a, b, c, d;
        public Exception(double a, double b, double c, double d)
        {
            this.a = a;
            this.b = b;
            this.c = c;
            this.d = d;
        }

        public double value()
        {
            if(d > 41)
            {
                throw new DivideByZeroException("Expression`s root has negative value");
            }
            else
            {
                if(Sqrt(41 - d) - b * a + c == 0)
                {
                    throw new DivideByZeroException("Expression`s denominator is zero");
                }
                else
                {
                    return (a * b / 4.0 - 1) / (Sqrt(41 - d) - b * a + c);
                }
            }

        }
    }
}
