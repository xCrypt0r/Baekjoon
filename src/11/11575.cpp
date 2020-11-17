/**
 * 11575. Affine Cipher
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 5,836 KB
 * 소요 시간: 300 ms
 * 해결 날짜: 2020년 9월 10일
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

    while (T--)
    {
        int a, b;
        string s;

        cin >> a >> b >> s;

        for (const auto& x : s)
        {
            cout << char((a * (x - 65) + b) % 26 + 65);
        }

        cout << "\n";
    }

}
