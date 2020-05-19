using System;

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