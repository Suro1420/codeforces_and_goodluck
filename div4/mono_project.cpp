// 2260B

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        long long monocarp_work = 0;
        long long x, y, k; // Where x employees, y projects , k months
        cin >> x >> y >> k;
        long long d = y - x;
        long long i = 0;


        while (i < k && d >= x + i)
        {
            monocarp_work += d % (x + i); // mathematical transformation of a mod b
            i++;
        }

        long long remaining_months = k - i;

        monocarp_work += d * remaining_months;

        cout << monocarp_work << "\n";

}
return 0;

}