#include <iostream>
#include <string>
using namespace std;

int main() {

    bool state = true; 
    string s;
    while (getline(cin,s)) {
        for (char c : s) {
            if (c == '"') {
                if (state == true) {
                    cout << "``";
                    state = false;
                }
                else if (state != true) {
                    cout << "''";
                    state = true;
                }
            }
            else {
            cout << c;
            }
        }
        cout << "\n";
    }

    return 0;

    }
