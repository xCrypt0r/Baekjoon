/**
 * 10823. 더하기 2
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S, num;
    int sum = 0;

    while (getline(cin, S))
    {
        for (int i = 0; i < S.length(); ++i)
        {
            if (S[i] != ',')
            {
                num += S[i];
            }
            else
            {
                sum += stoi(num);
                num = "";
            }
        }
    }

    sum += stoi(num);

    cout << sum;
}
