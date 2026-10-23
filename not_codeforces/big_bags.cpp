#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; long long k;
    cin >> n >> k;
    vector<long long> s(n + 1), prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        prefix[i] = prefix[i-1] + s[i];
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        long long minSum;
        if (i > k) {
            minSum = prefix[k];
        } else {
            minSum = prefix[k+1] - s[i];
        }
        if (s[i] >= minSum) count++;

    }
    cout << count << "\n";
}