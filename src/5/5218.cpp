/**
 * 5218. 알파벳 거리
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
    string word1, word2;

    cin >> T;

    while (T--)
    {
        cin >> word1 >> word2;
        cout << "Distances:";

        for (int i = 0; i < word1.length(); ++i)
        {
            cout << ' ' << (word1[i] <= word2[i] ? word2[i] - word1[i] : word2[i] - word1[i] + 26);
        }

        cout << '\n';
    }
}
