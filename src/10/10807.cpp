/**
 * 10807. 개수 세기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, v;

    cin >> N;

    int num[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> num[i];
    }

    cin >> v;
    cout << count(num, num + N, v);
}
