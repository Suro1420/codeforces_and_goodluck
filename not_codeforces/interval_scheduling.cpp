#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

int n;
vector<pair<int, int>> v;
int x, w;

void read_input() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        cin >> w;
        v.push_back({x, w});
    }
}

int main() {

    read_input();

sort(v.begin(), v.end(),
    [](pair<int,int> a, pair<int,int> b) {
        return a.second < b.second;
    });

    int lastFinish = INT_MIN;
    int count = 0;

    for (int i = 0; i < n; i++) { 
        if (v[i].first >= lastFinish) { // Here the greedy rule
            count++;
            lastFinish = v[i].second;
        }
    }

    cout << count << endl;

    return 0;
}