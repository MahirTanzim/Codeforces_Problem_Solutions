#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while(t--){
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int x = a+b+c;
        int y = n/x;
        if(n%x == 0)
            cout << y*3 << endl;
        else{
            if(n%x <= a)
                cout << y*3+1 << endl;
            else if(n%x <= a+b)
                cout << y*3+2 << endl;
            else
                cout << y*3+3 << endl;

        }
    }
    return 0;
}