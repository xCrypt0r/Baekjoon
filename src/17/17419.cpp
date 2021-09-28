/**
 * 17419. 비트가 넘쳐흘러
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 4,916 KB
 * 소요 시간: 36 ms
 * 해결 날짜: 2021년 9월 29일
 */

#include <iostream>

using namespace std;

int main()
{
    int N;
    string K;
    int count = 0;

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        if (K[i] == '1')
        {
            count++;
        }
    }

    cout << count << endl;
}