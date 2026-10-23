#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>
#include <array>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<array<bool, 2>> dp(n + 1, {false, false});
        dp[0][0] = true;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            int neg = (x == -1) ? 1 : 0;

            for (int p = 0; p < 2; p++)
            {
                if (dp[i - 1][p])
                {
                    dp[i][p ^ neg] = true;
                }
            }
        }

        if (n % 2 == 0 && dp[n][(n / 2) % 2])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}