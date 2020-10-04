#include <iostream>

using namespace std;

void reverse_number(int& num);

int main()
{
    int A, B;

    cin >> A >> B;

    reverse_number(A);
    reverse_number(B);

    cout << (A > B ? A : B) << endl;
}

void reverse_number(int& num)
{
    int res = 0;

    while (num != 0)
    {
        res = res * 10 + num % 10;
        num /= 10;
    }

    num = res;
}
