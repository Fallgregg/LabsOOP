using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab02_Csh
{

    class CustomString
    {
        private string str;
        public CustomString(string str) {
            str = str;
        }
        public string getStr()
        {

        }
        private:
	string str;
        public:
	CustomString(string str);
        string getStr();
        int compare(string str);
        int size();
    };
    class Program
    {
        static void Main(string[] args)
        {
        }
    }
}
