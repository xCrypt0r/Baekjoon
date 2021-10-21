/**
 * 9536. 여우는 어떻게 울지?
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,036 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 10월 22일
 */

using System;
using System.Linq;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var sr = new System.IO.StreamReader(Console.OpenStandardInput());
        var sw = new System.IO.StreamWriter(Console.OpenStandardOutput());
        var T = int.Parse(sr.ReadLine());

        while (T-- > 0)
        {
            var sounds = sr.ReadLine().Split(' ');
            var nonFoxSounds = new List<string>();

            while (true)
            {
                var sound = sr.ReadLine();

                if (sound == "what does the fox say?")
                {
                    break;
                }

                nonFoxSounds.Add(sound.Substring(sound.IndexOf("goes ") + 5));
            }

            var foxSounds = sounds.Where(s => !nonFoxSounds.Contains(s));

            sw.WriteLine(string.Join(" ", foxSounds));
        }

        sr.Close();
        sw.Close();
    }
}