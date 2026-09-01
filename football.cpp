#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    
    int a = 1;
    
    for(int i=1; i< s.length(); i++){
        if(s[i] == s[i-1]){
            a++;
            if(a>=7){
                cout<< "YES";
                return 0;
            }
        } else {
            a = 1;
        }
    }
    cout << "NO";
    return 0;
}