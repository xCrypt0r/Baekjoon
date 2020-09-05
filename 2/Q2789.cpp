#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const string cambridge = "CAMBRIDGE";
    string word;

    cin >> word;

    for (const auto& c : word)
    {
        if (cambridge.find(c) == string::npos)
        {
            cout << c;
        }
    }
}
