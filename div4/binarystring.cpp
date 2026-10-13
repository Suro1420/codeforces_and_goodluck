// 2248A
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        string sentence;

        cin >> sentence;

        for (int i = 0; i < sentence.size(); i++)
        {
            if (sentence[i] == '0')
            {
                sentence.erase(i, 1);
                break;
            }
        }

        for (int i = 0; i < sentence.size(); i++)
        {

            if (sentence[i] == '1')
            {
                sentence.erase(i, 1);
                break;
            }
        }

        cout << sentence << '\n';
    }

    return 0;
}