#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    
    cin >> N;
    cin.ignore();

    string S[N];

    for (int i = 0; i < N; ++i)
    {
        getline(cin, S[i]);
    }

    for_each(S, S + N, [](string& s) {
        s[0] = toupper(s[0]);
        cout << s << "\n";
    });
}
