/**
 * 1871. 좋은 자동차 번호판
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,172 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string car_number;

    cin >> N;

    while (N--)
    {
        int value = 0, value2 = 0;
        
        cin >> car_number;

        for (int i = 0; i < 3; ++i)
        {
            value += (int)pow(26, 2 - i) * (car_number[i] - 'A');
        }

        value2 = stoi(car_number.substr(4));

        cout << (abs(value - value2) <= 100 ? "nice" : "not nice") << "\n";
    }
}
