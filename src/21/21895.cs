/**
 * 21895. Rock-Paper-Scissors for three
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,772 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 9월 26일
 */

using System;

class Program
{
    public static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        string player1 = Console.ReadLine();
        string player2 = Console.ReadLine();
        string player3 = "";

        for (int i = 0; i < n; i++)
        {
            if (player1[i] == player2[i])
            {
                if (player1[i] == 'R')
                {
                    player3 += 'P';
                }
                else if (player1[i] == 'S')
                {
                    player3 += 'R';
                }
                else if (player1[i] == 'P')
                {
                    player3 += 'S';
                }
            }
            else
            {
                if ((player1[i] == 'R' && player2[i] == 'S') || (player1[i] == 'S' && player2[i] == 'R'))
                {
                    player3 += 'R';
                }
                else if ((player1[i] == 'R' && player2[i] == 'P') || (player1[i] == 'P' && player2[i] == 'R'))
                {
                    player3 += 'P';
                }
                else if ((player1[i] == 'S' && player2[i] == 'P') || (player1[i] == 'P' && player2[i] == 'S'))
                {
                    player3 += 'S';
                }
            }
        }

        Console.WriteLine(player3);
    }
}