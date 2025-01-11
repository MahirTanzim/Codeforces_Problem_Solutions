#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    bool ab = a==b, ac = a==c, ad = a==d, bc = b==c, bd = b==d, cd = c==d;
    bool abc = ab && bc, abd = ab && bd, acd = ac && ad, bcd = bc && cd;
    bool abcd = ab && bc && cd;
    if(abcd)
        cout << "3" << endl;
    else if((ab && cd) || (ac && bd) || (ad && bc))
        cout << "2" << endl;
    else if(abc || bcd || acd || abd)
        cout << "2" << endl;
    else if(ab || bc || cd || ac || ad || bd)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    


    
    
    return 0;
}