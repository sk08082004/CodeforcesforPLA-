
#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    
    double s=0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        s+=a;
        
    } 
    cout<<s/n ;
    
}