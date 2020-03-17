using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Lab03 {
    public class MatrixClass {
        private int mult = 1;
        public int n;
        public int m;
        public int[,] arr;
        public MatrixClass(int a, int b, int[,] arr_temp) {
            n = a;
            m = b;
            arr = new int[n, m];

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    arr[i, j] = arr_temp[i, j];
                }
            }
        }

        public int multiply {
            get {
                mult = 1;
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        mult *= arr[i, j];
                    }
                }
                return mult;
            }
        }
        public double this[int index] {
            get {
                if (index >= n) {
                    Console.WriteLine("Inputed index is out of the range.");
                    return 0;
                } else {
                    double s = 0;
                    for (int j = 0; j < m; j++) {
                        s += arr[index, j];
                    }
                    s /= m;
                    return s;
                }

            }
        }

    }
}

