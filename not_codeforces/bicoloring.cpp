#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> level_height(10, 0);

    for (int i = 0; i < n; i++)
    {
        string t;
        int c;
        cin >> t >> c;

        int start_col = c - 1; 
        int width = 0;
        int piece_height = 0;

        if (t == "-") {
            width = 4;
            piece_height = 1;
        } 
        else if (t == "o") {
            width = 2;
            piece_height = 2;
        } 
        else if (t == "i") {
            width = 1;
            piece_height = 4;
        }

        int max_base = 0;
        for (int j = 0; j < width; j++) {
            max_base = max(max_base, level_height[start_col + j]);
        }

        for (int j = 0; j < width; j++) {
            level_height[start_col + j] = max_base + piece_height;
        }
    }

    cout << *max_element(level_height.begin(), level_height.end()) << "\n";

    return 0;
}