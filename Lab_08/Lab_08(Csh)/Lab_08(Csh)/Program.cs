using System;
using static System.Console;


namespace Lab_08_Csh
{
    class Program
    {
        delegate bool findL(char ch);
        static void Main(string[] args)
        {
            Write("Enter the sixe of queue: ");
            int size = Convert.ToInt32(ReadLine());
            MyQueue line = new MyQueue(size);

            WriteLine("Add characters to queue: ");
            for (int i = 0; i < size; i++)
            {
                line.Enqueue(Convert.ToChar(ReadLine()));
            }

            bool flag = true;
            while (flag)
            {
                WriteLine("\nChoose the action: ");
                WriteLine("\t1 - Add new element");
                WriteLine("\t2 - Delete element");
                WriteLine("\t3 - Find character");
                WriteLine("Chose: ");
                int c = Convert.ToInt32(ReadLine());

                switch (c)
                {
                    case 1:
                        Write("\nEnter new character: ");
                        line.Enqueue(Convert.ToChar(ReadLine()));
                        break;
                    case 2:
                        WriteLine($"\nChracter deleted: '{line.Dequeue()}'\n");
                        break;
                    case 3:
                        Write("\nEnter character to find: ");
                        char ch = Convert.ToChar(ReadLine());
                        findL func = line.findLetter;
                        bool res = func(ch);

                        if (res == true)
                        {
                            WriteLine("\nLine contains the character\n");
                        }
                        else
                        {
                            WriteLine("\nLine does not contain the character\n");
                        }
                        break;
                    default:
                        WriteLine("\nNo entered action.\n");
                        break;

                }
            }
            ReadKey();
        }

        private static void DisplayMessage(object sender, EventArgs message)
        {
            Console.WriteLine(message);
        }
    }
}

        