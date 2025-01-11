#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


int main()
{
    int n;
    cin >> n;
    vector <int> v(n+1), vv(n+1);
    for(int i = 1; i < n+1; i++){
        cin >> v[i];
        vv[v[i]] = i;
    }
    for(int i = 1; i < n+1; i++)
        cout << vv[i] << " ";
    
        
    
    
    return 0;
}