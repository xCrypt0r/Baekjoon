#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string sentence;

    while (true)
    {
        getline(cin, sentence);

        if (sentence == "#")
        {
            break;
        }

        bool appeared[26] = { false };

        for (const auto& c : sentence)
        {
            if (isalpha(c))
            {
                appeared[tolower(c) - 'a'] = true;
            }
        }

        cout << count(appeared, appeared + 26, true) << "\n";
    }
}
