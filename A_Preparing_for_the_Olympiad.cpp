#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


int main (){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n+1];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        b[n] = 0;

        int sa = 0, sb = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > b[i+1]){
                sa+=a[i];
                sb+=b[i+1];
            }
        }
        cout << sa - sb << endl;
    }
    return 0;
}