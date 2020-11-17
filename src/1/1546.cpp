/**
 * 1546. 평균
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int main()
{
    int N, M = 0;

    cin >> N;

    double score[N], sum = 0;

    for (int i = 0; i < N; ++i)
    {
        cin >> score[i];

        if (score[i] > M)
        {
            M = score[i];
        }
    }

    for (int i = 0; i < N; ++i)
    {
        score[i] = score[i] / M * 100;
        sum += score[i];
    }

    cout << fixed;
    cout.precision(2);
    cout << sum / N;
}