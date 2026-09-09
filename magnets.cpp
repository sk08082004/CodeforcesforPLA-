#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    
    int a = 1;
    string b, c;
    
    cin>> b;
    
    for (int i = 1; i < n; i++){
        cin >> c;
        
        if (b[1] == c[0]){
            a++;
        }
        
        b = c;
    }
    
    cout << a << endl;
    return 0;
    
}       