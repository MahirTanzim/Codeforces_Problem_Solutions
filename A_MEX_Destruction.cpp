#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        int cz = 0;
        for(int i = 0; i < n; i++)
            if(v[i] == 0)
                cz++;

        if(cz == n){
            cout << "0" << endl;
            continue;
        }

        int x, y;
        for(int i = 0; i < n; i++)
            if(v[i] != 0){
                x = i;
                break;
            }

        for(int i = n-1; i >=0; i--)
            if(v[i] != 0){
                y = i;
                break;
            }

        bool flag = true;
        for(int i = x+1; i < y; i++)
            if(v[i] == 0){
                flag = false;
                break;
            }
            
        flag ? cout << "1" << endl : cout << "2" << endl;
    }
    return 0;
}