/**
 * 1755. 숫자놀이
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,380 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2021년 10월 1일
 */

using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    public static string[] HowToRead = new string[]
    {
        "zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine", "ten"
    };

    public static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (M, N) = (input[0], input[1]);
        var dict = new Dictionary<int, string>();

        for (var i = M; i <= N; i++)
        {
            var list = new List<string>();
            var strnum = i.ToString();

            for (var j = 0; j < strnum.Length; j++)
            {
                list.Add(HowToRead[int.Parse(strnum[j].ToString())]);
            }

            dict.Add(i, string.Join(" ", list));
        }

        var sorted = dict.OrderBy(x => x.Value).ToDictionary(x => x.Key, x => x.Value);
        var index = 0;

        foreach (var item in sorted)
        {
            index++;
            Console.Write(item.Key + (index % 10 == 0 ? "\n" : " "));
        }
    }
}