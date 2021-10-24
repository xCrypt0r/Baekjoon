/**
 * 9081. 단어 맞추기
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,024 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 10월 24일
 */

#include <iostream>
#include <algorithm>

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
        string s;

        cin >> s;

        if (!next_permutation(s.begin(), s.end()))
        {
            prev_permutation(s.begin(), s.end());
        }

        cout << s << endl;
    }
}