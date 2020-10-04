#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    string subs[2] = { "JOI", "IOI" };
    int pos = 0, count;
    
    cin >> s;

    for_each(subs, subs + 2, [&](const string& sub) {
        count = 0;

        for (auto pos = s.find(sub); pos != string::npos; pos = s.find(sub, pos + 2))
        {
            count++;
        }

        cout << count << "\n";
    });
}
