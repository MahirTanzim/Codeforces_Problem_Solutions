#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		if(n == 1 || n == 3)
			cout << "-1" << endl;
		else{
			if(n%2==0){
				for(int i = 0; i < n; i++){
				if(i == n-1 || i == n-2)
					s.push_back('6');
				else
					s.push_back('3');
				}
			}
			else{
				for(int i = 0; i < n; i++){
				if(i == n-1 || i == n-2 || i == n-4)
					s.push_back('6');
				else
					s.push_back('3');
				}
			}
			cout << s << endl;

		}
	}
	return 0;
}
