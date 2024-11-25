#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		string v = "aeiou";
		int i = 0, j = 0;
		while(i < n){
			if(i%5 == 0)
				j = 0;
			s.push_back(v[j]);
			i++; j++;

		}
		sort(s.begin(), s.end());
		cout << s << '\n';
	}
	return 0;
}
