#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int operation = 0;
		while(n>1){
			n-=(k-1);
			operation++;
		}
		cout << operation << endl;
	}
	return 0;
}
