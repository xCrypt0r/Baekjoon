/**
 * 5586. JOI와 IOI
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 27일
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    string subs[2] = { "JOI", "IOI" };
    int pos = 0, count;
    
    cin >> s;

    for_each(subs, subs + 2, [&](const string& sub) {
        count = 0;

        for (auto pos = s.find(sub); pos != string::npos; pos = s.find(sub, pos + 2))
        {
            count++;
        }

        cout << count << "\n";
    });
}
