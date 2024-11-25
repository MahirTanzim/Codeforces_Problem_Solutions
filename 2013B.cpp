#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int t;
	cin >> t;
	while(t--){
		long long int n; 
		cin >> n;
		long long int a[n];
		for(long long int i = 0; i < n; i++)
			cin >> a[i];
		long long int s = 0;
		for(long long int i = 0; i < n-2; i++)
			s+=a[i];
		a[n-2]-=s;
		a[n-1]-=a[n-2];

		cout << a[n-1] << endl;

	}
	

	return 0; 
}
