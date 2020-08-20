#include <iostream>

using namespace std;

int main()
{
    string name;
    string shorthand = "";

    cin >> name;

    for (const char& c : name)
    {
        if (isupper(c))
        {
            shorthand += c;
        }
    }

    cout << shorthand;
}