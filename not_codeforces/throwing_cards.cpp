#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        list<int> cards;
        for (int i = 1; i <= n; i++)
            cards.push_back(i);
        vector<int> discarded;
        while (cards.size() >= 2)
        {
            discarded.push_back(cards.front());
            cards.pop_front();
            cards.splice(cards.end(), cards, cards.begin());
        }

        cout << "Discarded cards:";
        for (int i = 0; i < discarded.size(); i++)
        {
            cout << (i ? ", " : " ") << discarded[i];
        }
        cout << "\n";
        cout << "Remaining card: " << cards.front() << "\n";
    }

    return 0;
}