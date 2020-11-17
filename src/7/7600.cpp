/**
 * 7600. 문자가 몇갤까
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string sentence;

    while (true)
    {
        getline(cin, sentence);

        if (sentence == "#")
        {
            break;
        }

        bool appeared[26] = { false };

        for (const auto& c : sentence)
        {
            if (isalpha(c))
            {
                appeared[tolower(c) - 'a'] = true;
            }
        }

        cout << count(appeared, appeared + 26, true) << "\n";
    }
}
