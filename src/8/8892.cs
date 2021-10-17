/**
 * 8892. 팰린드롬
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 18,612 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2021년 10월 17일
 */

using System;

class Program
{
    public static void Main()
    {
        var T = int.Parse(Console.ReadLine());

        while (T-- > 0)
        {
            var k = int.Parse(Console.ReadLine());
            var S = new string[k];
            var flag = false;

            for (int i = 0; i < k; i++)
            {
                S[i] = Console.ReadLine();
            }

            for (int i = 0; i < k; i++)
            {
                if (flag)
                {
                    break;
                }

                for (int j = 0; j < k; j++)
                {
                    if (i == j)
                    {
                        continue;
                    }

                    if (IsPalindrome(S[i] + S[j]))
                    {
                        Console.WriteLine(S[i] + S[j]);

                        flag = true;

                        break;
                    }
                }
            }

            if (!flag)
            {
                Console.WriteLine(0);
            }
        }
    }

    public static bool IsPalindrome(string s)
    {
        for (int i = 0; i < s.Length / 2; i++)
        {
            if (s[i] != s[s.Length - 1 - i])
            {
                return false;
            }
        }

        return true;
    }
}