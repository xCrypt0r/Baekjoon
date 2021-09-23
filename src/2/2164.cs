/**
 * 2164. 카드2
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 9,900 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2021년 9월 23일
 */

using System;
using System.Collections.Generic;

class Program {
    public static void Main() {
        Queue<int> q = new Queue<int>();
        int N = int.Parse(Console.ReadLine());

        for (int i = 0; i < N; i++)
        {
            q.Enqueue(i + 1);
        }

        while (q.Count > 1)
        {
            q.Dequeue();
            q.Enqueue(q.Dequeue());
        }

        Console.WriteLine(q.Peek());
    }
}