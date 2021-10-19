/**
 * 1158. 요세푸스 문제
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,500 KB
 * 소요 시간: 360 ms
 * 해결 날짜: 2021년 10월 20일
 */

using System;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        var (N, K) = (input[0], input[1]);
        var q = new Queue<int>();
        var res = new List<int>();

        for (var i = 0; i < N; i++)
        {
            q.Enqueue(i + 1);
        }

        while (q.Count > 0)
        {
            if (q.Count == 1)
            {
                res.Add(q.Dequeue());

                break;
            }

            for (var i = 0; i < K - 1; i++)
            {
                q.Enqueue(q.Dequeue());
            }

            res.Add(q.Dequeue());
        }

        Console.WriteLine("<" + string.Join(", ", res) + ">");
    }
}