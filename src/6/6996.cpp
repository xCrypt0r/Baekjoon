/**
 * 6996. 애너그램
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 10일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;

    cin >> T;

    while (T--)
    {
        string A, B;

        cin >> A >> B;

        string a = A;
        string b = B;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b)
        {
            cout << A << " & " << B << " are anagrams." << "\n";
        }
        else
        {
            cout << A << " & " << B << " are NOT anagrams." << "\n";
        }
    }
}
