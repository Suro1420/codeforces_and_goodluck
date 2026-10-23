#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<int, int>> fires;

    int n, k;
    int total = 0;
    cin >> n >> k;
    for (int i = 0 ; i < k ; i++) {
        int a,b;
        cin >> a >> b;
        fires.push_back(make_pair(a,b));
    } 

    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= n ; j++) {
        
        int earliest = INT_MAX;

        for (int f = 0 ; f < k ; f++) {
            int fi = fires[f].first;
            int fj = fires[f].second;

            int distance = abs(fi - i) + abs(fj - j);
            earliest = min(earliest, distance);
            }
            
            total = max(total, earliest);

        }
    }

    cout << total << '\n';
    return 0;

}