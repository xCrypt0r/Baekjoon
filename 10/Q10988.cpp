#include <iostream>

using namespace std;

int main()
{
    string s;
    bool is_palindrome = true;

    cin >> s;

    for (int head = 0, tail = s.length() - 1; head <= tail; head++, tail--)
    {
        if (s[head] != s[tail])
        {
            is_palindrome = false;

            break;
        }
    }

    cout << is_palindrome;
}
