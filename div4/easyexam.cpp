// 2260A

#include <iostream>
#include <vector>
using namespace std;
 
 
 
int main()
{
 
    vector<int> x;
    int t;
    cin >> t;
    int n;
 
    while (t--)
    {
 
        x.clear();
 
        cin >> n;
        int easyprob = 0;
 
        for (int i = 0; i < n; i++)
        {
 
            int a;
            cin >> a;
            if (a == 0)
                easyprob++;
 
            x.push_back(a);
        }
 
        if (easyprob < 2)
        {
            cout << -1 << '\n';
        }
        else
        {
            if (x.front() == 0 && x.back() == 0) {
                cout << 0 << '\n';
            }
 
            else if (x.front() == 0 && x.back() != 0 || x.front() != 0 && x.back() == 0) {
                cout << 1 << '\n';
            }
 
            else {
                cout << 2 << '\n';
            }
 
 
        }
    }
 
    return 0;
}