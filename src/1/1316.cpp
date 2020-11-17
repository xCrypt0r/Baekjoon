/**
 * 1316. 그룹 단어 체커
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 21일
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    string word;
    vector<char> appeared;
    int count = 0;
    bool is_group = false;

    cin >> N;

    while (N--)
    {
        appeared.clear();
        is_group = true;

        cin >> word;

        for (int i = 0; i < word.length(); ++i)
        {
            if (find(appeared.begin(), appeared.end(), word[i]) != appeared.end())
            {
                if (word[i] == word[i - 1])
                {
                    appeared.push_back(word[i]);
                }
                else
                {
                    is_group = false;

                    break;
                }
            }
            else
            {
                appeared.push_back(word[i]);
            }
        }

        if (is_group)
        {
            count++;
        }
    }

    cout << count;
}