using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Math;

namespace Lab_05_Csh_
{
    class Figures 
    {
        protected double x1, x2, x3, x4, y1, y2, y3, y4;
        public double s1 = 0;
        public double s2 = 0;
        public double s3 = 0;
        public double s4 = 0;
        public Figures(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
        {
            this.x1 = x1;
            this.x2 = x2;
            this.x3 = x3;
            this.x4 = x4;
            this.y1 = y1;
            this.y2 = y2;
            this.y3 = y3;
            this.y4 = y4;
            side_length();
        }
        private void side_length()
        {
            s1 = Sqrt(Pow(x2 - x1, 2) + Pow(y2 - y1, 2));
            s2 = Sqrt(Pow(x3 - x2, 2) + Pow(y3 - y2, 2));
            s3 = Sqrt(Pow(x4 - x3, 2) + Pow(y4 - y3, 2));
            s4 = Sqrt(Pow(x1 - x4, 2) + Pow(y1 - y4, 2));
        }
    }

    class Rectangle
    {
        protected double perim = 0;
        protected Figures obj;
        protected double ar = 0;
        protected double a1 = 0;
        protected double a2 = 0;
        protected double a3 = 0;
        protected double a4 = 0;


        public void rect_check(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
        {
            a1 = (x2 - x1) * (x3 - x2) + (y2 - y1) * (y3 - y2);
            a2 = (x3 - x2) * (x4 - x3) + (y3 - y2) * (y4 - y3);
            a3 = (x4 - x3) * (x1 - x4) + (y4 - y3) * (y1 - y4);
            a4 = (x1 - x4) * (x2 - x1) + (y1 - y4) * (y2 - y1);
        }

        public Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
        {
            obj = new Figures(x1, y1, x2, y2, x3, y3, x4, y4);
            rect_check(x1, y1, x2, y2, x3, y3, x4, y4);
            if (a1 == 0 && a2 == 0 && a3 == 0 && a4 == 0)
            {
                perimetr(obj.s1, obj.s2);
                area(obj.s1, obj.s2);
            }
        }

        private void perimetr(double a, double b)
        {
            perim = (a + b) * 2;
        }

        private void area(double a, double b)
        {
            ar = a * b;
        }

        public double getPerimetr()
        {
            return perim;
        }

        public double getArea()
        {
            return ar;
        }

    }
}


