#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int prev, cur;
    cin >> prev;             

    int profit = 0;
    int buyPrice = 0;
    bool hasStock = false;

    for (int i = 2; i <= n; i++) {
        cin >> cur;
        int diff = cur - prev;
        // Case where we buy the stock
        if (diff >= k && !hasStock) { 
            buyPrice = cur;
            hasStock = true;
        }
        else if (-diff >= k && hasStock) { // We sell when price too high
            profit += cur - buyPrice;
            hasStock = false;
        }


        prev = cur;
    }

    cout << profit << endl;
    return 0;
}