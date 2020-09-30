#include <iostream>
#include <map>

using namespace std;

int main()
{
    int N, max = 0;
    map<string, int> books;
    string title, bestseller;

    cin >> N;

    while (N--)
    {
        cin >> title;

        books[title]++;
    }

    for (const auto& book : books)
    {
        if (book.second > max)
        {
		    max = book.second;
            bestseller = book.first;
        }
    }

    cout << bestseller;
}
