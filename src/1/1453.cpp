/**
 * 1453. 피시방 알바
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 2일
 */

#include <iostream>
#include <set>

using namespace std;

int main()
{
    int N, num;
    set<int> s;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> num;

        s.insert(num);   
    }

    cout << N - s.size();
}
