#include <bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t, n, k, a, b;
	cin>>t;
	while(t--){
		a = b = 0;
		cin >> n;
		while(n--){
			cin >> k;
			(k==1?a++:b++);
		}
		cout << ((a%2 || (b<a && (b-a)%2!=0))?"NO":"YES") << endl;
	} 	
	return 0;
 
}
