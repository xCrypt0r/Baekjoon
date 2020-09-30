#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    string vowels = "aeiou";
    int count = 0;

    cin >> word;

    for (const char& c : word)
    {
        if (vowels.find(c) != string::npos)
        {
            count++;
        }
    }

    cout << count;
}
