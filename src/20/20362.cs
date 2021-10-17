/**
 * 20362. 유니대전 퀴즈쇼
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,956 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2021년 10월 17일
 */

using System;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var input = Console.ReadLine().Split(' ');
        var (N, S) = (int.Parse(input[0]), input[1]);
        var reply = new List<string>();
        var count = 0;
        var answer = "";

        for (var i = 0; i < N; i++)
        {
            input = Console.ReadLine().Split(' ');

            if (input[0] == S)
            {
                answer = input[1];

                break;
            }

            reply.Add(input[1]);
        }

        for (var i = 0; i < reply.Count; i++)
        {
            if (reply[i] == answer)
            {
                count++;
            }
        }

        Console.WriteLine(count);
    }
}