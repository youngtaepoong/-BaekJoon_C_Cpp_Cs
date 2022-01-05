using System;

namespace Div
{
    class Program
    {
        static void Main(string[] args)
        {
            string inputStr;
            double n1, n2, result;
            string[] token;

            inputStr = Console.ReadLine(); // 줄 입력, Console.Read(); 문자 입력
            token = inputStr.Split(' '); // divide with space
            // https://docs.microsoft.com/ko-kr/dotnet/csharp/how-to/parse-strings-using-split

            n1 = Convert.ToDouble(token[0]); // a = int.Parse(token[0]);
            n2 = double.Parse(token[1]);
            result = Math.Truncate((n1/n2) * 1000000000000) / 1000000000000;
    
            Console.WriteLine(result);
        }
    }
}