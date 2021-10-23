/**
 * 5637. 가장 긴 단어
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,176 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 10월 23일
 */

#include <iostream>
#include <algorithm>
#include <regex>

using namespace std;

int main()
{
    string s;
    string max_string = "";
    int max_len = 0;
    regex rgx("[a-zA-Z\\-]+");

    while (true)
    {
        cin >> s;

        if (s == "E-N-D")
        {
            break;
        }

        smatch match;

        while (regex_search(s, match, rgx))
        {
            if (match[0].length() > max_len)
            {
                max_len = match[0].length();
                max_string = match[0];
            }

            s = match.suffix();
        }
    }

    transform(max_string.begin(), max_string.end(), max_string.begin(), ::tolower);

    cout << max_string << endl;
}