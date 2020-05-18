using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace Lab_07_Csh_
{
    internal class Node
    {
        public short value { get; set; }
        public Node next { get; set; }
    }
    class MyStruct
    {
        private int size { get; set; }
        private Node head { get; set; }
        private Node elem { get; set; }
        public void push(short val)
        {
            Node newNode = new Node() { value = val };

            if (head == null)
            {
                head = newNode;
                //WriteLine(head.value);
            }
            else
            {
                elem.next = newNode;
                //WriteLine(newNode.value);
            }
            elem = newNode;
            size++;
        }

        public int count()
        {
            int n = 0;
            Node temp = head;
            while (temp != null)
            {
                if (temp.value % 4 == 0)
                {
                    n += 1;
                }
                temp = temp.next;
            }
            return n;
        }

        public void exchange()
        {
            Node temp = head;
            int n = 0;
            while (temp != null)
            {
                if (n % 2 == 0)
                {
                    temp.value = 0;
                }
                temp = temp.next;
                n++;
            }
        }
        public void output()
        {
            Node temp = head;
            while (temp != null)
            {
                Write(temp.value.ToString() + " ");
                temp = temp.next;
            }
        }
    }
}


