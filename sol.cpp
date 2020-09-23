#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int a[6], p;
		for(int i=0; i<5; ++i)
			cin >> a[i];
		cin >> p;
		int sum=0;
		for(int i=0; i<5; ++i)
			sum+=(p*a[i]);
		cout << (sum<=120?"No":"Yes") << "\n";
	}
}
