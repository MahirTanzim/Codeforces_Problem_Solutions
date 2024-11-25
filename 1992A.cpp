#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		int k = 5;
		while(k--){
			if(a == min({a,b,c}))
				a++;
			else if(b == min({a,b,c}))
				b++;
			else
				c++;
		}
		cout << a*b*c << endl;
	}
	return 0;
}
