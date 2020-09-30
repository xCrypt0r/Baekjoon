#include <iostream>
#include <locale>

using namespace std;

int main()
{
    string sentence;
    string result = "";

    getline(cin, sentence);

    for (auto& c : sentence)
    {
        result += isalpha(c) ? ((c > 'M' && c <= 'Z')  || (c > 'm' && c <= 'z') ? c - 13 : c + 13) : c;
    }

    cout << result << endl;
}
