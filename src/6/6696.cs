/**
 * 6696. Too Much Water
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,060 KB
 * 소요 시간: 144 ms
 * 해결 날짜: 2021년 10월 24일
 */

using System;

class Program
{
    public static void Main()
    {
        while (true)
        {
            var input = Console.ReadLine().Split(' ');
            var (X, Y) = (double.Parse(input[0]), double.Parse(input[1]));

            if (X == 0 && Y == 0)
            {
                break;
            }

            var Z = (int)Math.Ceiling((X * X + Y * Y) * Math.PI / 100);

            Console.WriteLine($"The property will be flooded in hour {Z}.");
        }
    }
}