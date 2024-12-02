#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n;
		int a[n]; 
		int arr[n] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			arr[a[i]-1]++;
		}
		int ones = 0;
		int oneplus = 0;
		for(int i = 0; i < n; i++){
			if(arr[i] == 1)
				ones++;
			else if(arr[i] > 1)
				oneplus++;
				
		}
		int alice;
		if(ones%2 == 0)
			alice = ones + oneplus;
		else
			alice = ones + oneplus + 1;
 
		cout << alice << endl;
 
	}
	return 0;
}
