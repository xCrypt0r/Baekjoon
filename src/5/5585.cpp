/**
 * 5585. 거스름돈
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>

using namespace std;

int count = 0;

void process_change(int& change, int amount);

int main()
{
    const int amounts[6] = { 500, 100, 50, 10, 5, 1 };
    int price;

    cin >> price;

    int change = 1000 - price;

    for (const int& amount: amounts)
    {
        process_change(change, amount);
    }

    cout << ::count;
}

void process_change(int& change, int amount)
{
    if (change >= amount)
    {
        ::count += change / amount;
        change %= amount;
    }
}
