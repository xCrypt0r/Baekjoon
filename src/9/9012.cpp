/**
 * 9012. 괄호
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 4일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string s;

    cin >> T;

    while (T--)
    {
        cin >> s;

        int count = 0;

        for (int i = 0; i < s.length() && count >= 0; ++i)
        {
            s[i] == '(' ? count++ : count--;
        }

        cout << (count == 0 ? "YES" : "NO") << "\n";
    }
}
