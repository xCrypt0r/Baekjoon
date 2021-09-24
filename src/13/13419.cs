using System;
using System.Text;

class Program
{
    public static void Main()
    {
        var T = int.Parse(Console.ReadLine());
        var res = new String[T];

        for (var i = 0; i < T; i++)
        {
            var input = Console.ReadLine();
            var res1 = "";
            var res2 = "";

            if (input.Length % 2 == 1)
            {
                input += input;
            }

            for (var j = 0; j < input.Length; j++)
            {
                if (j % 2 == 0)
                {
                    res1 += input[j];
                }
                else
                {
                    res2 += input[j];
                }
            }

            res[i] = res1 + "\n" + res2;
        }

        Console.WriteLine(new StringBuilder(string.Join("\n", res)));
    }
}