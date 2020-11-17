/**
 * 11655. ROT13
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 21일
 */

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    string sentence;
    string result = "";

    getline(cin, sentence);

    for (auto& c : sentence)
    {
        result += isalpha(c) ? ((c > 'M' && c <= 'Z')  || (c > 'm' && c <= 'z') ? c - 13 : c + 13) : c;
    }

    cout << result << endl;
}
