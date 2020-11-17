/**
 * 2857. FBI
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 27일
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string name;
    int count = 0;
    const string fbi = "FBI";

    for (int i = 0; i < 5; ++i)
    {
        cin >> name;

        if (name.find(fbi) != string::npos)
        {
            cout << i + 1 << "\n";
            count++;
        }
    }

    if (count == 0)
    {
        cout << "HE GOT AWAY!" << "\n";
    }
}
