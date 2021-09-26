/**
 * 20839. Betygsättning
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,732 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;

class Program
{
    static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (x, y, z) = (input[0], input[1], input[2]);
        var input2 = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (x2, y2, z2) = (input2[0], input2[1], input2[2]);

        if (y2 * 2 < y)
        {
            Console.WriteLine("E");
        }
        else if (y2 < y)
        {
            Console.WriteLine("D");
        }
        else if (x2 * 2 < x)
        {
            Console.WriteLine("C");
        }
        else if (x2 < x)
        {
            Console.WriteLine("B");
        }
        else
        {
            Console.WriteLine("A");
        }
    }
}
