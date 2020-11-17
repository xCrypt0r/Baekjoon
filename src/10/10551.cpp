/**
 * 10551. STROJOPIS
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int SIZE = 8;
    const string keys[SIZE] = {
        "1QAZ", "2WSX", "3EDC", "45RTFGVB",
        "67YUHJNM", "8IK,", "9OL.", "0-=P[];'/"
    };
    int fingers[SIZE] = { 0 };
    string line;

    getline(cin, line);

    for (const auto& c : line)
    {
        for (int i = 0; i < SIZE; ++i)
        {
            if (keys[i].find(c) != string::npos)
            {
                fingers[i]++;

                break;
            }
        }
    }

    for (const auto& finger : fingers)
    {
        cout << finger << "\n";
    }
}
