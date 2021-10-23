/**
 * 20953. 고고학자 예린
 *
 * 작성자: xCrypt0r
 * 언어: C11
 * 사용 메모리: 1,112 KB
 * 소요 시간: 44 ms
 * 해결 날짜: 2021년 10월 23일
 */

#include <stdio.h>

int main()
{
    int T;
    unsigned int a, b;

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", (a + b) * (a + b) * (a + b - 1) / 2);
    }
}