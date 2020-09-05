#include <iostream>

using namespace std;

int main()
{
    string num;
    bool is_palindrome;

    while (true)
    {
        cin >> num;

        if (num == "0")
        {
            break;
        }

        is_palindrome = true;

        for (int head = 0, tail = num.length() - 1; head <= tail; head++, tail--)
        {
            if (num[head] != num[tail])
            {
                is_palindrome = false;

                break;
            }
        }

        cout << (is_palindrome ? "yes" : "no") << "\n";
    }
}
