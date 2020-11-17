/**
 * 1152. 단어의 개수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 3,644 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string sentence;
    int count = 1;

    getline(cin, sentence);

    if (sentence.empty())
    {
        cout << 0;

        return 0;
    }

    for (const char& c : sentence)
    {
        if (c == ' ')
        {
            count++;
        }
    }

    if (sentence[0] == ' ')
    {
        count--;
    }

    if (sentence[sentence.length() - 1] == ' ')
    {
        count --;
    }

    cout << count;
}