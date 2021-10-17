/**
 * 18245. 이상한 나라의 암호
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 18,704 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2021년 10월 17일
 */

using System;

class Program
{
    public static void Main()
    {
        var increment = 1;

        while (true)
        {
            var input = Console.ReadLine();

            if (input == "Was it a cat I saw?")
            {
                break;
            }

            increment++;

            var res = "";

            for (var i = 0; i < input.Length; i += increment)
            {
                res += input[i];
            }

            Console.WriteLine(res);
        }
    }
}