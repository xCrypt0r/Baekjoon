/**
 * 11922. BELA
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,740 KB
 * 소요 시간: 92 ms
 * 해결 날짜: 2021년 9월 25일
 */

using System;

class Program
{
    public static void Main()
    {
        var input = Console.ReadLine().Split();
        var N = int.Parse(input[0]);
        var P = char.Parse(input[1]);
        var res = 0;

        for (var i = 0; i < N * 4; i++)
        {
            var tmp = Console.ReadLine();

            switch (tmp[0])
            {
                case 'A':
                    res += 11;

                    break;

                case 'K':
                    res += 4;

                    break;

                case 'Q':
                    res += 3;

                    break;

                case 'J':
                    res += tmp[1] == P ? 20 : 2;

                    break;

                case 'T':
                    res += 10;

                    break;

                case '9':
                    res += tmp[1] == P ? 14 : 0;

                    break;

                case '7':
                case '8':
                    break;
            }
        }

        Console.WriteLine(res);
    }
}