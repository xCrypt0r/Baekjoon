#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sentence;

    while (true)
    {
        getline(cin, sentence);

        if (sentence == "END")
        {
            break;
        }

        reverse(sentence.begin(), sentence.end());

        cout << sentence << "\n";
    }
}
