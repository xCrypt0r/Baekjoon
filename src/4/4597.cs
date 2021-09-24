/**
 * 4597. 패리티
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,684 KB
 * 소요 시간: 92 ms
 * 해결 날짜: 2021년 9월 24일
 */

using System;

class Program
{
    public static void Main()
    {
        while (true)
        {
            var bitstring = Console.ReadLine();

            if (bitstring == "#")
            {
                break;
            }

            var lastChar = bitstring[bitstring.Length - 1];
            var count = 0;

            bitstring = bitstring.Substring(0, bitstring.Length - 1);

            for (int i = 0; i < bitstring.Length; i++)
            {
                if (bitstring[i] == '1')
                {
                    count++;
                }
            }

            if (lastChar == 'e')
            {
                bitstring += count % 2 == 0 ? "0" : "1";
            }
            else
            {
                bitstring += count % 2 == 0 ? "1" : "0";
            }

            Console.WriteLine(bitstring);
        }
    }
}