#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, i;
    string oper;
    vector<bool> res;

    while (true)
    {
        cin >> a >> oper >> b;

        if (oper == "E")
        {
            break;
        }
        else if (oper == ">")
        {
            res.emplace_back(a > b);
        }
        else if (oper == ">=")
        {
            res.emplace_back(a >= b);
        }
        else if (oper == "<")
        {
            res.emplace_back(a < b);
        }
        else if (oper == "<=")
        {
            res.emplace_back(a <= b);
        }
        else if (oper == "==")
        {
            res.emplace_back(a == b);
        }
        else if (oper == "!=")
        {
            res.emplace_back(a != b);
        }
    }

    for (int i = 0; i < res.size(); ++i)
    {
        cout << "Case " << i + 1 << ": " << boolalpha << res[i] << "\n";
    }
}
