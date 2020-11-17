/**
 * 10773. 제로
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,764 KB
 * 소요 시간: 24 ms
 * 해결 날짜: 2020년 9월 4일
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int K, num, sum = 0;
    vector<int> numbers;

    cin >> K;

    while (K--)
    {
        cin >> num;

        if (num == 0)
        {
            numbers.pop_back();
        }
        else
        {
            numbers.push_back(num);
        }
    }

    for (int i = 0; i < numbers.size(); ++i)
    {
        sum += numbers[i];
    }

    cout << sum;
}
