
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, c, x, cost = 0;
        vector<int> a, b;
        bool useSub = true, possible = true; // UseSub : true -> substract, else sort , possible : a -> b possible using the rules of the problem ?

        cin >> n >> c;

        for (int i = 0; i < n; i++) {
            cin >> x;
            a.push_back(x);
        }

        for (int i = 0; i < n; i++) {
            cin >> x;
            b.push_back(x);
        }

        for (int i = 0; i < n; i++)
            if (a[i] < b[i]) useSub = false;

        if (!useSub) {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            cost = c;
        }

        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                possible = false;
                break;
            }
            cost += a[i] - b[i];
        }

        cout << (possible ? cost : -1) << '\n';
    }

    return 0;
}
