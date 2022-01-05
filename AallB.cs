using System;
// https://www.acmicpc.net/problem/10869
namespace Plus
{
    class Program
    {
        static void Main(string[] args)
        {
            string inputStr;
            int n1, n2;
            string[] token;

            inputStr = Console.ReadLine(); // 줄 입력, Console.Read(); 문자 입력
            token = inputStr.Split(' '); // divide with space
            // https://docs.microsoft.com/ko-kr/dotnet/csharp/how-to/parse-strings-using-split

            n1 = Convert.ToInt32(token[0]); // a = int.Parse(token[0]);
            n2 = int.Parse(token[1]);

            Console.WriteLine(n1+n2);
            Console.WriteLine(n1-n2);
            Console.WriteLine(n1*n2);
            Console.WriteLine(n1/n2);
            Console.WriteLine(n1%n2);
        }
    }
}