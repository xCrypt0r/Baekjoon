/**
 * 10989. 수 정렬하기 3
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 1,620 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, temp;
    short count[10001] = { 0 };

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> temp;
        count[temp]++;
    }

    for (int i = 1; i <= 10000; ++i)
    {
        for (int j = 0; j < count[i]; ++j)
        {
            cout << i << '\n';
        }
    }
}
