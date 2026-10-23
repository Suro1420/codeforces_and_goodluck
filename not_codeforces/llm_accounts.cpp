#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int, int>> accounts;
    vector<pair<int, int>> requests;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x, q;
        cin >> x >> q;
        accounts.push_back({x, q});
    }

    for (int i = 0; i < m; i++)
    {
        int t, r;
        cin >> t >> r;
        requests.push_back({t, r});
    }

    long long total = 0;
    int discarded = 0;

    for (int i = 0; i < m; i++)
    {
        int t = requests[i].first;
        int r = requests[i].second;

        int idx = -1;
        int lowest = 2001;

        for (int j = 0; j < n; j++)
        {
            if (accounts[j].first >= t &&
                accounts[j].second >= r &&
                accounts[j].second < lowest)
            {
                lowest = accounts[j].second;
                idx = j;
            }
        }

        if (idx == -1)
        {
            discarded++;
        }
        else
        {
            accounts[idx].first -= t;
            total += 1 * t * accounts[idx].second;
        }
    }

    cout << total << " " << discarded << '\n';

    return 0;
}
