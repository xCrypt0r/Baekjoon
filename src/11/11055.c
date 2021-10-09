/**
 * 11055. 가장 큰 증가 부분 수열
 *
 * 작성자: xCrypt0r
 * 언어: C11
 * 사용 메모리: 1,120 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 10월 9일
 */

#include <stdio.h>

#define MAX 1000

int N;
int A[MAX + 1];
int DP[MAX + 1];

int main()
{
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
    }

    int max = 0;

    for (int i = 1; i <= N; i++)
    {
        DP[i] = A[i];

        for (int j = 1; j < i; j++)
        {
            if (A[i] > A[j] && DP[i] < DP[j] + A[i])
            {
                DP[i] = DP[j] + A[i];
            }
        }

        if (max < DP[i])
        {
            max = DP[i];
        }
    }

    printf("%d\n", max);
}