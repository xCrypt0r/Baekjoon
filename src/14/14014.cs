/**
 * 14014. Dudu of English
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 10,508 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2021년 10월 23일
 */

using System;
using System.Linq;
using System.Text.RegularExpressions;

class Program
{
    public static void Main()
    {
        var N = int.Parse(Console.ReadLine());
        var S = "";

        while (N-- > 0)
        {
            S += Console.ReadLine().ToLower() + " ";
        }

        var rgxOfWords = new Regex(@"^(of|to|into|onto|above|below|from|by|is|at)$");
        var rgxVowels = new Regex(@"[aeiou]");
        var rgxPunctuation = new Regex(@"[^a-z]");
        var rgxSpaces = new Regex(@"\s+");
        var words = rgxSpaces
            .Split(S)
            .Select(word => rgxOfWords.Replace(word, "of"))
            .Select(word => rgxVowels.Replace(word, "", word.Count(c => "aeiou".Contains(c)) / 2))
            .Select(word => rgxPunctuation.Replace(word, ""));
        var dudu = "";
        var count = 0;

        foreach (var word in words)
        {
            if (word == "")
            {
                continue;
            }

            if (count + word.Length > 20)
            {
                dudu += word + "\n";
                count = 0;
            }
            else
            {
                dudu += word + " ";
                count += word.Length;
            }
        }

        Console.WriteLine(dudu);
    }
}