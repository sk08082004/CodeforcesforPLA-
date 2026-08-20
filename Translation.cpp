
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a, b;
    cin >> a >> b;
 
    for (int i = 0; i < a.length(); i++) {
        if (a[a.length() - 1 - i] != b[i]) {
            cout << "NO\n";
            return 0;
        }
    }
 
    cout << "YES\n";
    return 0;
}