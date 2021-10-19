/**
 * 20291. 파일 정리
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 94,112 KB
 * 소요 시간: 1,448 ms
 * 해결 날짜: 2021년 10월 20일
 */

using System;
using System.Text;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var N = int.Parse(Console.ReadLine());
        var freq = new Dictionary<string, int>();
        var res = new List<string>();

        for (int i = 0; i < N; i++)
        {
            var file = Console.ReadLine();
            var ext = file.Split('.')[1];

            if (freq.ContainsKey(ext))
            {
                freq[ext]++;
            }
            else
            {
                freq[ext] = 1;
            }
        }

        var sorted = new SortedDictionary<string, int>(freq);

        foreach (var item in sorted)
        {
            res.Add($"{item.Key} {item.Value}");
        }

        Console.WriteLine(new StringBuilder(string.Join("\n", res)));
    }
}