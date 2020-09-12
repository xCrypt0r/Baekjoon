#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int size = 5;
    int answer, guess[size];

    cin >> answer;

    for (int i = 0; i < size; ++i)
    {
        cin >> guess[i];
    }

    cout << count(guess, guess + size, answer);
}
