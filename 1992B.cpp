#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[k];
		for(int i = 0; i < k; i++)
			cin >> a[i];
		sort(a, a+k);
		int flag = 0;
		for(int i = 0; i < k-1; i++)
			flag+=(2*a[i]-1);
		cout << flag << endl;
	}
	return 0;
}
