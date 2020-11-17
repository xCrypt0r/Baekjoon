/**
 * 2675. 문자열 반복
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;

    cin >> T;

    for (; T > 0; --T)
    {
        int R;
        string S;

        cin >> R >> S;

        for (const char& c : S)
        {
            for (int i = 0; i < R; ++i)
            {
                cout << c;
            }
        }

        cout << '\n';
    }
}
