/**
 * 5235. Even Sum More Than Odd Sum
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,844 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 9월 19일
 */

using System;

class Program {
    public static void Main() {
        int T = int.Parse(Console.ReadLine());

        for (int i = 0; i < T; i++) {
            string[] input = Console.ReadLine().Split(' ');
            int k = int.Parse(input[0]);
            int[] nums = new int[k];
            int oddSum = 0;
            int evenSum = 0;

            for (int j = 0; j < k; j++) {
                nums[j] = int.Parse(input[j + 1]);

                if (nums[j] % 2 == 0) {
                    evenSum += nums[j];
                } else {
                    oddSum += nums[j];
                }
            }

            Console.WriteLine(oddSum > evenSum ? "ODD" : oddSum < evenSum ? "EVEN" : "TIE");
        }
    }
}