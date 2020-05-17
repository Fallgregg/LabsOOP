using System;
/*using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace Lab_08_Csh_
{
    public delegate bool checkString(string str);
    public delegate void cleanQueue(string message);
    public class Node<T>
    {
        public Node(T data)
        {
            Data = data;
        }
        public T Data { get; set; }
        public Node<T> Next { get; set; }
    }
    public class Queue<T>
    {

        public event cleanQueue clear; 

         Node<T> head;
        Node<T> tail;
        int count;
        public bool isEmpty { get { return count == 0; } }
        public void addElem(T elem)
        {
            Node<T> node = new Node<T>(elem);
            Node<T> temp = tail;
            tail = node;
            if (count == 0)
            {
                clear?.Invoke("Queue is empty");
            }
            if (count == 0)
            {
                head = tail;
            }
            else
            {
                temp.Next = tail;
            }
        }

        public T delElem()
        {
            
            
            T val = head.Data;
            head = head.Next;
            count--;
            return val;
        }
    }

    class String
    {
        public string str;
       public String(string str)
        {
            this.str = str;
        }
        public static bool findLetter(string str)
        {
            Write("\nEnter letter: ");
            char ch = Convert.ToChar(ReadLine());

            bool flag = false;
            for (int i = 0; i < str.Length; i++)
            {
                if (str[i] == ch)
                {
                    flag = true;
                    break;
                }
            }
            return flag;
        }

        public bool findLetter2(string str)
        {
            Write("\nEnter letter: ");
            char ch = Convert.ToChar(ReadLine());

            bool flag = false;
            for (int i = 0; i < str.Length; i++)
            {
                if (str[i] == ch)
                {
                    flag = true;
                    break;
                }
            }
            return flag;
        }
    }
}
*/

namespace Lab_08_Csh
{
    public class MyQueue
    {
        public delegate void myQueue(object sender, EventArgs message);
        public event myQueue Notify;

        private int _Front = -1;
        private int _Rear = -1;
        private int _Count = 0;
        private int _Size;
        private char[] _Array;

        public MyQueue(int Size)
        {
            this._Size = Size;
            this._Array = new char[this._Size];
        }

        public bool isFull()
        {
            return _Rear == _Size - 1;
        }

        public bool isEmpty()
        {
            return _Count == 0;
        }

        public void Enqueue(char item)
        {
            if(this.isFull())
            {
                throw new Exception("Queue is full");
            }
            _Array[++_Rear] = item;
            _Count++;
        }

        public char Dequeue()
        {
            if(this.isEmpty())
            {
                Notify?.Invoke(this, new StackEventArgs() { Message = "Queue is empty." });
            }
            char value = _Array[++_Front];
            _Count--;
            if(_Front == _Rear)
            {
                _Front = -1;
                _Rear = -1;
            }
            return value;
        }

        public bool findLetter(char ch) 
        {
            for (int i = 0; i < _Size; i++)
            {
                if (_Array[i] == ch)
                {
                    return true;
                    break;
                }
            }
            return false;
        }

        public class StackEventArgs : EventArgs
        {
            public string Message { get; set; }
        }
    }
}