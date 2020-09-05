#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;

    getline(cin, sentence);

    string operation = sentence.find("OR") != string::npos ? "OR" : "AND";
    string b1 =  sentence.substr(0, sentence.find(' '));
    string b2 = sentence.substr(sentence.rfind(' ') + 1);

    if (operation == "OR")
    {
        cout << (b1 == "true" || b2 == "true" ? "true" : "false");
    }
    else if (operation == "AND")
    {
        cout << (b1 == "true" && b2 == "true" ? "true" : "false");
    }
}
