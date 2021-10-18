/**
 * 2929. 머신 코드
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,696 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 10월 19일
 */

using System;

class Program
{
    public static void Main()
    {
        var code = Console.ReadLine();
        var count = 0;

        for (var i = 0; i < code.Length; i++)
        {
            while (char.IsUpper(code[i]) && (i + count) % 4 != 0)
            {
                count++;
            }
        }

        Console.WriteLine(count);
    }
}