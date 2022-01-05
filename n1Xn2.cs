using System;
using static System.Console;

namespace »çÄ¢¿¬»ê11¹ø
{
    class °ö¼À
    {
        static void Main(string[] args)
        {
            string a = ReadLine();
            string b = ReadLine();
            
            WriteLine(int.Parse(a)* (int)Char.GetNumericValue(b[2]));
            WriteLine(int.Parse(a) * (int)Char.GetNumericValue(b[1]));
            WriteLine(int.Parse(a) * (int)Char.GetNumericValue(b[0]));
            WriteLine(int.Parse(a) * int.Parse(b));
        }
    }
}