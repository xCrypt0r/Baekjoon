/**
 * 1018. 체스판 다시 칠하기
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,764 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2021년 9월 23일
 */

using System;

class Program {
    static string[] WB =
    {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
    };
    static string[] BW =
    {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
    };
    static string[] board = new string[50];

    public static void Main()
    {
        int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (N, M) = (input[0], input[1]);
        int min = int.MaxValue;

        for (int i = 0; i < N; i++)
        {
            board[i] = Console.ReadLine();
        }

        for (int i = 0; i + 8 <= N; i++)
        {
            for (int j = 0; j + 8 <= M; j++)
            {
                int tmp = Math.Min(CountWB(i, j), CountBW(i, j));

                if (tmp < min)
                {
                    min = tmp;
                }
            }
        }

        Console.WriteLine(min);
    }

    public static int CountWB(int x, int y)
    {
        int count = 0;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (board[x + i][y + j] != WB[i][j])
                {
                    count++;
                }
            }
        }

        return count;
    }

    public static int CountBW(int x, int y)
    {
        int count = 0;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (board[x + i][y + j] != BW[i][j])
                {
                    count++;
                }
            }
        }

        return count;
    }
}