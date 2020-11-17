/**
 * 2386. 도비의 영어 공부
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 9일
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char c;
    string s;

    while (true)
    {
        cin >> c;
        cin.ignore();

        if (c == '#')
        {
            break;
        }

        getline(cin, s);

        transform(s.begin(), s.end(), s.begin(), [](auto c) {
            return tolower(c);      
        });

        cout << c << " " << count(s.begin(), s.end(), c) << "\n";
    }
}
