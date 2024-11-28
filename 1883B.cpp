#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int a[26] = {0};
 
		for(int i = 0; i < n; i++)
			a[s[i]-'a']++;
		int count = 0;
 
		bool even = true;
		for(int i = 0; i < 26; i++){
			if(a[i] != 0 && a[i]%2 != 0)
				count++;
		}
		if(k >= count-1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
 
		
 
	}
	return 0;
}
