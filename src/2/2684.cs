/**
 * 2684. 동전 게임
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,900 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 9월 24일
 */

using System;
using System.Text;

class Program
{
    public static void Main()
    {
        var P = int.Parse(Console.ReadLine());
        var res = new String[P];

        for (var i = 0; i < P; i++)
        {
            var input = Console.ReadLine();
            var sequences = new int[8];

            Array.Clear(sequences, 0, 8);

            for (var j = 0; j < 38; j++)
            {
                if (input[j] == 'T' && input[j + 1] == 'T' && input[j + 2] == 'T')
                {
                    sequences[0]++;
                }
                else if (input[j] == 'T' && input[j + 1] == 'T' && input[j + 2] == 'H')
                {
                    sequences[1]++;
                }
                else if (input[j] == 'T' && input[j + 1] == 'H' && input[j + 2] == 'T')
                {
                    sequences[2]++;
                }
                else if (input[j] == 'T' && input[j + 1] == 'H' && input[j + 2] == 'H')
                {
                    sequences[3]++;
                }
                else if (input[j] == 'H' && input[j + 1] == 'T' && input[j + 2] == 'T')
                {
                    sequences[4]++;
                }
                else if (input[j] == 'H' && input[j + 1] == 'T' && input[j + 2] == 'H')
                {
                    sequences[5]++;
                }
                else if (input[j] == 'H' && input[j + 1] == 'H' && input[j + 2] == 'T')
                {
                    sequences[6]++;
                }
                else
                {
                    sequences[7]++;
                }
            }

            res[i] = string.Join(" ", sequences);
        }

        Console.WriteLine(new StringBuilder(string.Join("\n", res)).ToString());
    }
}