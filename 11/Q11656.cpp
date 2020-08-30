#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string s;
    vector<string> prefix;

    cin >> s;

    for (int i = 0; i < s.length(); ++i)
    {
        prefix.emplace_back(s.substr(i));
    }

    sort(prefix.begin(), prefix.end());

    for (const auto& pre : prefix)
    {
        cout << pre << "\n";
    }
}
