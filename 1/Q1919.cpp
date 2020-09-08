#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 26;
    string a, b;
    int A[SIZE] = { 0 }, B[SIZE] = { 0 };
    int count = 0;

    cin >> a >> b;

    for (const auto& c : a)
    {
        A[c - 'a']++;
    }

    for (const auto& c : b)
    {
        B[c - 'a']++;
    }

    for (int i = 0; i < SIZE; ++i)
    {
        count += abs(A[i] - B[i]);
    }

    cout << count;
}
