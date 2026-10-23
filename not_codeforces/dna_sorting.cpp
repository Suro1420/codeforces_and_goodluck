#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<pair<int,int>> accounts;
    vector<pair<int,int>> requests;

    int n , m; cin >> n >> m;

    for (int i = 0 ; i < n ; i++) {
        int x , q; cin >> x >> q;
        accounts.push_back({x,q});
    }

    for (int i = 0 ; i < m ; i++) {
        for (int i = 0 ; i < n ; i++) {
        int t,r; cin >> t >> r;
        requests.push_back({t,r});
    }
    }

    
    return 0;
}