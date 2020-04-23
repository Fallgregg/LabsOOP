using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

public class MyClass
{
    private int len;
    private string str;

    private void init()
    {
        str = "";
        len = 0;
    }

    public MyClass()
    {
        init();
    }

    public MyClass(string str)
    {
        this.str = str;
        length(str);
    }

    public MyClass(MyClass copy)
    {
        this.str = copy.str;
        this.len = copy.str.Length;
    }

    public void length(string str)
    {
        this.len = str.Length;
    }

    public string getStr()
    {
        return this.str;
    }

    public static MyClass operator +(MyClass first, MyClass second)
    {
        if (first.str.Length == 0 || second.str.Length == 0)
        {
            throw new ArgumentNullException("Entered string is empty");
        }

        MyClass result = new MyClass();
        result.str = first.str + second.str;
        return result;
    }

    public static MyClass operator /(MyClass str_val, int num)
    {
        if (str_val.str.Length == 0)
        {
            throw new ArgumentNullException("Entered string is empty");
        }


        string temp_str = "";
        for (int i = 0; i < str_val.len; i++)
        {
            if (i % num == 0)
            {
                temp_str += str_val.str[i];
            }
        }
        str_val.str = temp_str;
        return str_val;
    }
}
