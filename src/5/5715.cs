/**
 * 5715. Jingle Composing
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 15,680 KB
 * 소요 시간: 2,552 ms
 * 해결 날짜: 2021년 9월 30일
 */

using System;

class Program
{
    public static void Main()
    {
        while (true)
        {
            var input = Console.ReadLine();

            if (input == "*")
            {
                break;
            }

            var measures = input.Substring(1, input.Length - 1).Split('/');
            var res = 0;

            foreach (var measure in measures)
            {
                var duration = 0.0;

                for (var i = 0; i < measure.Length; i++)
                {
                    switch (measure[i])
                    {
                        case 'W':
                            duration++;

                            break;

                        case 'H':
                            duration += 0.5;

                            break;

                        case 'Q':
                            duration += 0.25;

                            break;

                        case 'E':
                            duration += 0.125;

                            break;

                        case 'S':
                            duration += 0.0625;

                            break;

                        case 'T':
                            duration += 0.03125;

                            break;

                        case 'X':
                            duration += 0.015625;

                            break;
                    }
                }

                if (duration == 1)
                {
                    res++;
                }
            }

            Console.WriteLine(res);
        }
    }
}