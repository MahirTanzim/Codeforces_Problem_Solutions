#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cs = 0, cp = 0, cd = 0;
        for(auto i : s){
            if(i == 's')
                cs++;
            if(i == 'p')
                cp++;
            if(i == '.')
                cd++;
        }
        if(cs == 0 || cp == 0 || cd == n)
            cout << "YES" << endl;
        else if(cp == 1 && s[n-1] == 'p')
            cout << "YES" << endl;
        else if(cs == 1 && s[0] == 's')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}