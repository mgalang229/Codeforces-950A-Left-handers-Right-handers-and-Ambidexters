#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int l, r, a;
	cin >> l >> r >> a;
	while(a>0) {
		if(l<r)
			l++;
		else
			r++;
		a--;
	}
	cout << min(l, r)*2 << "\n";
}
