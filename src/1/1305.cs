/**
 * 1305. 광고
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 13,556 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2021년 9월 23일
 */

using System;

class Program {
    public static void Main() {
        int L = int.Parse(Console.ReadLine());
        string s = Console.ReadLine();
        int[] memo = new int[L + 1];
        int j = 0;

        for (int i = 1; i < L; i++)
        {
            while (s[i] != s[j] && j > 0)
            {
                j = memo[j - 1];
            }

            if (s[i] == s[j])
            {
                memo[i] = ++j;
            }
        }

        Console.WriteLine(L - memo[L - 1]);
    }
}