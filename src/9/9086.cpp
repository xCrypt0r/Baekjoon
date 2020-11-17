/**
 * 9086. 문자열
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 21일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string word;

    cin >> T;

    while (T--)
    {
        cin >> word;
        cout << word[0] << word[word.length() - 1] << '\n';
    }
}
