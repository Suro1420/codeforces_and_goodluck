    #include <iostream>
    #include <vector>
    #include <string>
    #include <algorithm>
    #include <utility>
    #include <numeric>

    using namespace std;

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        vector<int> a;
        int t;
        cin >> t;

        while (t--)
        {
            a.clear();
            int n;
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                a.push_back(x);
            }

            if (n % 2 != 0)
            {
                cout << "NO\n";
                continue;
            }

            int count_neg = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == -1)
                {
                    count_neg++;
                }
            }

            if (n % 4 == 0)
            {
                if (count_neg % 2 == 0)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                if (count_neg % 2 != 0)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }

        return 0;
    }