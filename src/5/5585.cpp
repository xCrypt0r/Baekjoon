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
