/**
 * 15725. 다항함수의 미분
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,176 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 10월 23일
 */

#include <iostream>
#include <regex>

using namespace std;

int main()
{
    string formula;

    cin >> formula;

    regex rgx("((?:-|\\+)?\\d*)x");
    smatch match;

    regex_search(formula, match, rgx);

    if (match[1] == "")
    {
        cout << (match[0] == "" ? 0 : 1) << endl;
    }
    else if (match[1] == "-")
    {
        cout << -1 << endl;
    }
    else if (match[1] == "+")
    {
        cout << 1 << endl;
    }
    else
    {
        cout << stoi(match[1]) << endl;
    }
}