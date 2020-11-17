/**
 * 1181. 단어 정렬
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 3,948 KB
 * 소요 시간: 840 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b);

int main()
{
    int N;

    cin >> N;

    string words[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> words[i];
    }

    sort(words, words + N, compare);

    for (int i = 0; i < N; ++i)
    {
        if (words[i] != words[i + 1])
        {
            cout << words[i] << endl;
        }
    }
}

bool compare(const string& a, const string& b)
{
    return a.length() == b.length() ? a < b : a.length() < b.length();
}
