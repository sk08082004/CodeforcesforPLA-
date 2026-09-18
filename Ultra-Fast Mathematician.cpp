#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string a, b;
    cin >> a >> b;
    
    string burger = "";
    
    for (int i = 0; i < a.length(); i++){
        if (a[i] != b[i]){
            burger += '1';
        } else {
            burger += '0';
        }
    }
    
    cout << burger << endl;
    
    return 0;
}