/**
 * 1011. Fly me to the Alpha Centauri
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,772 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 10월 21일
 */

using System;

class Program
{
    public static void Main()
    {
        var sr = new System.IO.StreamReader(Console.OpenStandardInput());
        var sw = new System.IO.StreamWriter(Console.OpenStandardOutput());
        var T = int.Parse(sr.ReadLine());

        while (T-- > 0)
        {
            var input = Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);
            var (x, y) = (input[0], input[1]);
            var distance = y - x;
            var count = Math.Round(Math.Sqrt(distance));

            sw.WriteLine(distance <= count * count ? count * 2 - 1 : count * 2);
        }

        sr.Close();
        sw.Close();
    }
}