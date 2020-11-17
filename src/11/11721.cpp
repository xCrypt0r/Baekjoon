/**
 * 11721. 열 개씩 끊어 출력하기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    string word;
    vector<string> chunks;
    int pos = 0;

    cin >> word;

    for (int i = 0; i < word.length() / 10 + 1; ++i)
    {
        chunks.push_back(word.substr(pos, 10));
        pos += 10;
    }

    for (const string& chunk : chunks)
    {
        cout << chunk << '\n';
    }
}
