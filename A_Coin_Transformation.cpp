#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long coin = 1;
        
        while(n > 3){
            n/=4;
            coin*=2;
        }
        cout << coin << endl;
    }
}