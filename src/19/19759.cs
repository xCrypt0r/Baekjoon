/**
 * 19759. <<Кто хочет стать миллионером?>>
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,780 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 10월 24일
 */

using System;

class Program
{
    public static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        int prize = 100;
        char[] temp;

        for (int i = 0; i < n; i++)
        {
            Console.WriteLine(prize);

            prize *= 2;
            temp = prize.ToString().ToCharArray();

            if (temp[temp.Length / 2] != '0')
            {
                int head = Int32.Parse(new string(temp[Range.EndAt(temp.Length / 2)])) + 1;

                prize = head * (int)Math.Pow(10, (temp.Length + 1) / 2);
            }
        }
    }
}