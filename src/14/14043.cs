/**
 * 14043. Ragaman
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,976 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2021년 10월 2일
 */

using System;
using System.Linq;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var a = Console.ReadLine();
        var b = Console.ReadLine();
        var allowDiff = b.Count(x => x == '*');
        var flag = true;
        var count1 = new Dictionary<char, int>();
        var count2 = new Dictionary<char, int>();
        var countDiff = 0;

        for (var i = 0; i < 26; i++)
        {
            var c = (char)('a' + i);

            if (!count1.ContainsKey(c))
            {
                count1.Add(c, 0);
            }

            count1[c] = a.Count(x => x == c);

            if (!count2.ContainsKey(c))
            {
                count2.Add(c, 0);
            }

            count2[c] = b.Count(x => x == c);
        }

        foreach (var c in count1.Keys)
        {
            if (count1[c] > count2[c])
            {
                countDiff += count1[c] - count2[c];
            }
        }

        if (countDiff != allowDiff)
        {
            flag = false;
        }

        Console.WriteLine(flag ? "A" : "N");
    }
}