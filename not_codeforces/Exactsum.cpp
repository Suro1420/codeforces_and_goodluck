#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>
using namespace std;
vector<int> book_available;

int lowerBound(int lo, int hi, int x)
{
    if (lo == hi)

        return lo; // We return value lo because the recursive calls are going to reduce my array

    int mid = lo + (hi - lo) / 2;

    if (book_available[mid] < x)
    {
        return lowerBound(mid + 1, hi, x);
    }

    else
    {
        return lowerBound(lo, mid, x);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n && n)
    {
        book_available.clear(); // To reset every test
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            book_available.push_back(p);
        }
        sort(book_available.begin(), book_available.end());

        int m;
        cin >> m;
        int bi = -1, bj = -1;
        for (int i = 0; i < n; i++)
        {
            int target = m - book_available[i];
            if (book_available[i] > target) break;
            int pos = lowerBound(i+1, n, target);
            if (pos < n && book_available[pos] == target)
            {
                bi = i, bj = pos;
                
            }

        }
        cout << "Peter should buy books whose prices are " << book_available[bi] << " and " << book_available[bj] << ".\n\n";
    }
    return 0;
}