/**
 * 4606. The Seven Percent Solution
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 9일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    const int size = 7;
	char from[size] = { ' ', '!', '$', '%', '(', ')', '*' };
    string to[size] = { "%20", "%21", "%24", "%25", "%28", "%29", "%2a" };

    while (true)
    {
        string s, res = "";

        getline(cin, s);

        if (s == "#")
        {
            break;
        }

        for (auto& c : s)
        {
            auto last = from + size;
            auto it = find(from, last, c);
            int i = distance(from, it);

            res += (it == last ? string(1, c) : to[i]);
        }

        cout << res << "\n";
    }
}
