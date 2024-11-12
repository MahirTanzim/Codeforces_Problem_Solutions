
// https://codeforces.com/problemset/problem/1990/A
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n+1];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i <= n; i++)
			b[i] = 0;
 
		for(int i = 0; i < n; i++){
			b[a[i]]++;
		}
		bool alice = false;
 
		for(int i = 0; i <= n; i++){
			
			if(b[i]%2!=0){
				alice = true;
				break;
			}
 
				
		}
		
		if(alice==false)
			cout<< "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
