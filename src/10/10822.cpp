/**
 * 10822. 더하기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 21일
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    string delim = ",";
    size_t pos = 0;
    int sum = 0;

    cin >> S;

    while ((pos = S.find(delim)) != string::npos)
    {
        sum += stoi(S.substr(0, pos));
        S.erase(0, pos + delim.length());
    }

    sum += stoi(S);

    cout << sum;
}
