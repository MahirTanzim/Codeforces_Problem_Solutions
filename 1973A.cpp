#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int x = max(a, max(b,c));
        int z = min(a, min(b,c));
        int y = a+b+c-x-z;
        int p = x+y+z;
        if(p%2!=0)
            cout << "-1" << endl;
        else{
            if(y+z > x)
                cout << p/2 << endl;
            else if(y+z <= x)
                cout << y+z << endl;
        }
    }
    return 0;
}
