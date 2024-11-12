#include<iostream>
using namespace std;
int main()
{
    int t, a, b, c, d;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        if(a>b)
            swap(a,b);
        if (c>d)
            swap(c,d);
        if((a>c && a<d && b>d) || (c>a && c<b && d>b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
