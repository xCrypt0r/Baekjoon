/**
 * 2789. 유학 금지
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const string cambridge = "CAMBRIDGE";
    string word;

    cin >> word;

    for (const auto& c : word)
    {
        if (cambridge.find(c) == string::npos)
        {
            cout << c;
        }
    }
}
