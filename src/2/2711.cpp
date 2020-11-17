/**
 * 2711. 오타맨 고창영
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, pos;
    string sentence;

    cin >> T;

    while (T--)
    {
        cin >> pos >> sentence;

        sentence.erase(pos - 1, 1);

        cout << sentence << "\n";
    }
}
