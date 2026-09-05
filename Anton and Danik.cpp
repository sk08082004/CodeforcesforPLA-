#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    string games;
    cin >> games;
    
    int a = 0;
    int d = 0;
     
    for (int i = 0; i < n; i++) {
        if (games[i] == 'A') {
            a++;
        } else if (games[i] == 'D') {
            d++;
        }
    }
    
    if (a > d) {
        cout << "Anton" << endl;
    } else if (d > a) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
    
    return 0;
}