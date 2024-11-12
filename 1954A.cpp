#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    	int n, m, k;
    	cin >> n >> m >> k;
    	int a[n], color; 
    	for(int i = 0; i < n; i++){
    		if(i%m == 0)
    			color = 1;
    		a[i] = color;
    		color++;
    	}
    	for(int i = 0; i < n; i++){
    		if(a[i] != a[0]){
    			a[i] = a[0];
    			k--;
    		}
    		if(k==0)
    			break;
    	}
    	bool alice = false;
    	for(int i = 1; i < n; i++){
    		if(a[i] != a[i-1]){
    			alice = true;
    			break;
    		}
    	}
    	if(alice)
    		cout << "YES" << endl;
    	else
    		cout << "No" << endl;
    }
    return 0;
}
