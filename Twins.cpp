
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int b = 0;
    for (int &x : a) { 
        cin >> x; 
        b += x; 
    }
    sort(a.rbegin(), a.rend());
 
    int sum = 0, count = 0;   
    for (int x : a) {  
        sum += x; 
        count++;  
        if (sum > b - sum)  
            break;
    }
    cout << count;
}