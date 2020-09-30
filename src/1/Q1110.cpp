#include <iostream>

using namespace std;

int make_new_number(int n, int& cycle);

int main()
{
    int N, cycle = 0;

    cin >> N;

    int new_num = make_new_number(N, cycle);

    while (N != new_num)
    {
        new_num = make_new_number(new_num, cycle);
    }

    cout << cycle << endl;
}

int make_new_number(int n, int& cycle)
{
    cycle++;

    return (n % 10) * 10 + (n / 10 + n % 10) % 10;
}
