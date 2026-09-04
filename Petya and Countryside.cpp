#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    
    if (n == 1) {
        cout << 1 << '\n';
        return 0;
    }
    
    int p = 1;
    
    for (int q = 0; q < n; q++) {
        
        int r = q;
        int s = q;
        for (int t = q - 1; t >= 0; t--) {
            if (h[s] >= h[t]) {
                r = t;
                s = t;
            } else {
                break;
            }
        }
        
        int u = q;
        s = q;
        for (int v = q + 1; v < n; v++) {
            if (h[s] >= h[v]) {
                u = v;
                s = v;
            } else {
                break;
            }
        }
        
        int w = u - r + 1;
        p = max(p, w);
    }
    
    cout << p << '\n';
    
    return 0;
}