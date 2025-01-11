#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int a[m], b[k];
        for(int i = 0; i < m; i++)
            cin >> a[i];    
        for(int i = 0; i < k; i++)
            cin >> b[i];

        if(n - k > 1){
            for(int i = 0; i < m; i++)
                cout << '0';
        } 
        else if(n == k){
            for(int i = 0; i < m; i++)
                cout << '1';
        } 
        else if(n-k == 1){
            int c[n] = {0};
            for(int i = 0; i < k; i++){
                c[b[i]-1]++;
            }
            int x;
            for(int i = 0; i < n; i++){
                if(c[i] == 0)
                    x = i;
            }
            for(int i = 0; i < m; i++){
                if(i != x)
                    cout << '0';
                else
                    cout << '1';
            }
        }
        cout << endl;
    }
    return 0;
}