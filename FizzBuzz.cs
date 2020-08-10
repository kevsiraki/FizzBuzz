using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            FizzBuzz(100);
        }

        static void FizzBuzz(int i)
        {
            if (i == 0) return;
            else
            {
                FizzBuzz(i - 1);
                if (i % 3 == 0 && i % 5 == 0) Console.WriteLine("FizzBuzz");
                else if (i % 3 == 0) Console.WriteLine("Fizz");
                else if (i % 5 == 0) Console.WriteLine("Buzz");
                else Console.WriteLine(i);
            }
        }
    }
}
